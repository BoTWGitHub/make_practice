#include <stdio.h>

void print_helloworld()
{
    printf("from %s: \n", __func__);
    printf("\tHello, world.\n");
}