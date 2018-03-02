
ARCH = arm

##CROSS_DIR = 
CROSS_DIR = aarch64-linux-gnu-
CROSS_COMPILE	= $(CROSS_DIR)

CC =  $(CROSS_COMPILE)g++
CCP= $(CROSS_COMPILE)g++
LD = $(CROSS_COMPILE)ld
STRIP=$(CROSS_COMPILE)strip
AR = $(CROSS_COMPILE)ar
AS = $(CROSS_COMPILE)as
CFLAGS = -g -rdynamic

SRCS+= \
	test.c\
        hal_plock.c\
        spi_linux.c\

OBJS = $(SRCS:.cpp=.o)



TARGET=spi_test.elf

$(TARGET):$(OBJS)
	@echo "Makeing $(TARGET)..."
	$(CC) $(OBJS) -o $(TARGET) $(LIB) -lpthread -lrt


%.o:%.cpp
	@echo "=======>>Makeing $(CC) -w -c -o $<"
	@$(CC) $(CFLAGS) -c $< -w -o $@


clean:
	rm -f *.o *elf
	
