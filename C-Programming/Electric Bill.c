#include <stdio.h>
int main()
{
    int uc,c,ec;
    printf("Enter the total units consumed: ");
    scanf("%d",&uc);
    printf("Enter the cost per units: ");
    scanf("%d",&c);
    ec=uc*c;
    printf("Your total Electricity bill is :%d",ec);
    return 0;
}