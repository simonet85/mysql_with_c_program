#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    unsigned long maximum = 0;
    unsigned long value[]={10,32,100,90,78};
  
    // Calculate the number of element of the array
    size_t count = sizeof(value)/sizeof(unsigned long);
    for (size_t i = 0; i < count; i++)
    {
        if ( value[i] > maximum )
        {
            maximum = value[i];
        }
    }
    printf("The maximum is %lu \n", maximum);
        
    return EXIT_SUCCESS;
}

