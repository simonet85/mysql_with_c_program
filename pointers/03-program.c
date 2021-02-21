#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int x[] = {10, 30, 90, 56, 90, 12, 3};
    size_t length = sizeof(x)/sizeof(int);
    for (int i = 0; i < length; i++)
    {

        printf("Value at position %d : %d\n",i, x[i]);
        printf("Value at position %d : %d\n",i, *(x+i));
        printf("Address of element %d : %p\n",i, &x[i]);
        printf("Address of element %d : %p\n",i, (x+i));
    }
    return;
}