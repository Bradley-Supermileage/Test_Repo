#include <stdio.h>
#include "pico/stdlib.h"




int main()
{
    stdio_init_all();
    gpio_init(14);
    gpio_set_dir(14, true);
    

    while (true) {
        //printf("Hello, world!\n");
        gpio_put(14, true);
        sleep_ms(1000);
        gpio_put(14, false);
        sleep_ms(1000);
    }
}
