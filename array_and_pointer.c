#include <stdio.h>
int main()
{
    int arr[5] = {6, 7, 8, 9, 10};
    printf("Oth index address - %p\n", &arr[0]);
    printf("1th index address - %p\n", &arr[1]);
    printf("2th index address - %p\n", &arr[2]);
    printf("3th index address - %p\n", &arr[3]);
    printf("4th index address - %p\n", &arr[4]);
    printf("\n");
    printf("Oth index address - %p and value - %d\n", &arr, *arr);
    printf("1th index address - %p and value - %d\n", &arr[1], *(arr + 1));
    printf("2th index address - %p and value - %d\n", &arr[2], *(arr + 2));
    printf("3th index address - %p and value - %d\n", &arr[3], *(arr + 3));
    printf("4th index address - %p and value - %d\n", &arr[4], *(arr + 4));
    printf("\n");
    printf("%d\n", *(arr + 1));
    printf("%d\n", *(1 + arr));
    printf("%d\n", arr[1]);
    printf("%d\n", 1 [arr]);

    return 0;
}