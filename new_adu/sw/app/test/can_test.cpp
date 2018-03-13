#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include "hal_can.h"
#include "resue.h"
#include <time.h>
//#include <linux/can.h>
//#include <linux/can/raw.h>


extern int s_can[2];

#define BUILD_CAN_WRITE_TEST    0
#define BUILD_CAN_READ_TEST     1

int main(void)
{
#if BUILD_CAN_WRITE_TEST
    Initsocketcan("can0");

    uint8 data[6];
    for(int i = 0; i < 6; i++)
    {
        data[i] = i + 1;
    }

    struct can_frame write_frame;
    write_frame.can_id = 0x444;
    write_frame.can_dlc = 8;
    memcpy(&write_frame.data[0], &data[0], 6);

    for (int i = 0; i < 1000; i++)
    {
        int write_byte = write_canFrame(s_can[0], &write_frame, sizeof(write_frame));
        if (write_byte != sizeof(write_frame))
            printf("write can0 error, write_byte=%d\n", write_byte);
        else
            printf("write can0 ok\n");
        //usleep(1000*100);
        sleep(1);
    }
    close(s_can[0]);
#endif

#if BUILD_CAN_READ_TEST
    Initsocketcan("can0");

    struct can_frame read_frame;
    (void)memset(&read_frame, 0, sizeof(read_frame));

    // filter can_id
    struct can_filter rfilter;
    rfilter.can_id = 0x07e1;
    rfilter.can_mask = CAN_SFF_MASK;
    //setsockopt(s_can[0], SOL_CAN_RAW, CAN_RAW_FILTER, &rfilter, sizeof(rfilter));

    int read_nbytes = 0;

    //while((read_nbytes = read_canFrame(s_can[0], &read_frame, sizeof(read_frame)))>0)
        read_nbytes = read_canFrame(s_can[0], &read_frame, sizeof(read_frame));
    {
        struct timespec ti;
        clock_gettime(CLOCK_MONOTONIC, &ti);
        uint32_t recvtime = ti.tv_sec * 1000 + ti.tv_nsec / 1000000;
        printf("time: %d, ID = %x  DLC = %x  %x %x %x %x %x %x %x %x\n",
            recvtime, read_frame.can_id, read_frame.can_dlc, \
            read_frame.data[0], read_frame.data[1], read_frame.data[2], read_frame.data[3], \
            read_frame.data[4], read_frame.data[5], read_frame.data[6],read_frame.data[7]);
    }
    printf("read can0 over\n");
    close(s_can[0]);
#endif

    return 0;
}

#ifdef __cplusplus
}
#endif /* end of __cplusplus */
