#include <stdio.h>
void func(int *arr, int count)
//ekhane amra array ke pointer hishebe pass korechi. tobe chaile amra array ke 'arr[]' evabeo pass korte pari. jar jeta iccha
{
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int count;
    scanf("%d", &count);
    int arr[count];
    arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    // for (int i = 0; i < count; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }
    func(arr, count);

    return 0;
}