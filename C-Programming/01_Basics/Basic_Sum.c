#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int sum;
    sum=add(10,20);
    printf("SUM= %d",sum);
    return 0;
}