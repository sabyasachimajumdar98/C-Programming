#include<stdio.h>
int main()
{
    int no,i;
    printf("Enter a number: ");
        scanf("%d",&no);
    for(i=1;i<=10;i=i+1)
    {
        printf("%d x %d=%d\n",no,i,no*i);
    }
    return 0;
}