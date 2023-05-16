#include <stdio.h>
void fun(int *p)
{
    printf("Address of p - %p\n", p);
    printf("Value stored in  *p which is obtained from the main function - %d\n", *p);
    //My name is Maruf Hasan and currently I am studying in Jahangirnagar University. And this is my final year of bachelor or science in information technology. And this is just a basic typing test. And I think I am average at typing and my word per minute is about 50 or around 50. Okay thank you guys. 
    *p = 70;
}
int main()
{
    int x = 69;
    printf("Value of x in the main function - %d\n", x);
    printf("Address of x - %p\n", &x);
    fun(&x);
    printf("Value of x after dereferencing in fun function - %d\n", x);

    return 0;
}