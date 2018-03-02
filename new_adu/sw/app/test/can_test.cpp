#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include "hal_can.h"
#include "resue.h"


extern int s_can[2];
extern void Initsocketcan(const char *pcan);
extern int read_canFrame (int read_s, void *read_frame, int read_t);
extern int write_canFrame(int write_s, void *write_frame, int write_t);

int main(void)
{
    Initsocketcan("can0");
    
    uint8 data[6];
    for(int i = 0; i < 6; i++)
    {
        data[i] = i + 1;
    }

    struct can_frame write_frame;
    write_frame.can_id = 0x333;
    write_frame.can_dlc = 8;
    memcpy(&write_frame.data[0], &data[0], 6);

    int write_byte = write_canFrame(s_can[0], &write_frame, sizeof(write_frame));
    if (write_byte != sizeof(write_frame))
        printf("write can0 error, write_byte=%d\n", write_byte);
    else
        printf("write can0 ok\n");

    return 0;
}

#ifdef __cplusplus
}
#endif /* end of __cplusplus */
