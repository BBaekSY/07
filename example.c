#include <stdio.h>

int counter;

void set_counter(void);

int main(void)
{
    printf("counter=%d\n", counter);
    set_counter();
    printf("counter=%d\n", counter);

    return 0;
}

void set_counter(void)
{
    counter = 20;
}