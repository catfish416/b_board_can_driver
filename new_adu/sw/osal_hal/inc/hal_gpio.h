#ifndef HAL_GPIO_H
#   define  HAL_GPIO_H

extern int gpio_export(int pin);

extern int gpio_unexport(int pin);

extern int gpio_direction(int pin, int dir);

extern int gpio_write(int pin, int value);

extern int gpio_read(int pin);
#endif
