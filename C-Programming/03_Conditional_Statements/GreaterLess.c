#include<stdio.h>
int main() 
{
    int x,g;
    printf("Enter a number: ");
    scanf("%d",&x);
    g=x>9 && x<100;
    printf("Answer :%d",g);
    return 0;
}