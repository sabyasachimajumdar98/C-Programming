#include<stdio.h>
void Hello(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("HELLO\n");
    Hello(n-1);
}
int main()
{
    Hello(5);
    return 0;
}