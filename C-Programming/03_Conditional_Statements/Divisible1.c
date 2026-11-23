#include <stdio.h>
int main() 
{
    int n,d;
    printf("\nTo Check if a number is divisable by two or not\n");
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    d=n%2==0;
    printf("Divisible :%d",d);
    return 0;
}