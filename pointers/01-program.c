#include <stdio.h>
int main()
{
    int a = 20;
    int *p;
    p = &a;
    *p = 40;
    printf("Value of a : %d\n", a);
    printf("Address of a : %p\n", &a);
    printf("----------------------\n");
    printf("Address of p : %p\n", p);
    printf("Value of p : %d\n", *p);
    return 0;
}
