#include<stdio.h>

int main(){
    size_t size_tType;
    int intType;
    float floatType;
    double doubleType;
    char charType;
    int values[]={9,3,8,10,98};
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of array : %zu bytes \n",sizeof(values) );
    printf("Size of size_t: %zu bytes\n", sizeof(size_tType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu bytes\n", sizeof(charType));
    return 0;
}