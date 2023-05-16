#include <stdio.h>
int main()
{
    // int X = 69;
    // int *ptr = &X;
    // printf("Address of X - %p\n", &X);
    // printf("Value of X - %d\n", X);
    // printf("Value stored in 'ptr' - %p\n", *ptr);
    // printf("Address of 'ptr' - %p\n", &ptr);
    // printf("Memory Size of 'ptr' - %d\n", sizeof(ptr));
    // // Decimal value of the stored memory address in the pointer
    // printf("Address of 'ptr' in decimal - %d\n", &ptr); 
    // // Dereferencing
    // printf("Dereferencing of 'ptr' - %d\n", *ptr);
    // // One thing should be remembered that here X==*pointer

    double Y = 70.0568;
    double *ptr = &Y;
    double *ptr2 = ptr;
    *ptr2 = 71.6970;
    printf("Address of Y - %p\n", &Y);
    printf("Value of Y - %.03lf\n", Y);
    printf("Value stored in 'ptr2' - %.03lf\n", *ptr2);
    printf("Address of 'ptr2' - %p\n", &ptr2);
    printf("Memory Size of 'ptr2' - %d\n", sizeof(ptr2));
    // Decimal value of the stored memory address in the pointer
    printf("Address of 'ptr2' in decimal - %d\n", &ptr2);
    // Dereferencing
    printf("Dereferencing of 'ptr2' - %.03lf\n", *ptr2);
    // One thing should be remembered that here Y==*pointer

    return 0;
}