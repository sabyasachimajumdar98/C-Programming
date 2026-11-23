#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int multi(int a, int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int mod(int a,int b)
{
    return a%b;
}
int main()
{
    int a,b;
    printf("\n-----SIMPLE CALCULATOR-----\n");
    printf("\nEnter first value: ");
    scanf("%d",&a);
    printf("Enter second value: ");
    scanf("%d",&b);
    printf("\n\nAddition:%d\n",add(a,b));
    printf("Subtraction:%d\n",sub(a,b));
    printf("Multiplication:%d\n",multi(a,b));
    printf("Division:%d\n",div(a,b));
    printf("Modulus:%d\n",mod(a,b));
    return 0;
}