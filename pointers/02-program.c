// Program to Increment a number using pointers
#include <stdio.h>
#include <stdlib.h>

void increment(int *a)
{
    // *a = (*a)+1;
    printf("Value of a : %d\n", (*a)+1);
}

void main(int argc, char *argv[])
{
    int x = 10;
    increment(&x);
    return;
}