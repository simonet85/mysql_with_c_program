#include <stdio.h>
#include <stdlib.h>
int sum(int x[], size_t length)
{
    int sum = 0;
    for (size_t i = 0; i < length; i++)
    {
        sum += x[i];
    }

    return sum;
}
void main(int argc, char *argv[])
{
    int x[] = {10, 30, 90, 56, 90, 12, 3};
    size_t length = sizeof(x) / sizeof(int);
    int total = sum(x, length);
    printf("Sum of array element is : %d\n", total);
    return ;
}