#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("1st Value: %d\n",a);
    printf("2nd Value: %d",b);
    return 0;
}