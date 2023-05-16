#include <stdio.h>
void fun(int x)
{
    printf("Address of x inside the *fun* function - %p\n", &x);
    printf("Value of x = %d\n", x);
}
int main()
{
    int x = 10;
    fun(x);
    printf("Address of x inside the *main* function - %p\n", &x);
    printf("Value of x = %d\n", x);
    return 0;
}