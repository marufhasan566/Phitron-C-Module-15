#include <stdio.h>
void func(int *arr, int count)
{
    arr[0] = 69;
    arr[1] = 70;
}
int main()
{
    int count;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    // Printing before calling the function
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\n");
    func(arr, count);
    // Printing after calling the function in which we have changed some element of array by dereferencing because when we pass array as parameter in a function, it passes the memory address of that array into that function.
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}