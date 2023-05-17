#include <stdio.h>
#include <string.h>
void func(char *c)
{
    printf("%d\n", strlen(c));
    c[0] = 'A';
    c[1] = 'i';
}
int main()
{
    char c[20] = "University";
    printf("%s\n", c);
    func(c);
    printf("%s\n", c);
    return 0;
}