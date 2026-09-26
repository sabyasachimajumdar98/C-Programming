#include<stdio.h>
int main(){
    int bs,hra,da,ta,gs,d,ns;
    printf("Salary Slip\n");
    printf("Input your salary:");
    scanf("%d",&bs);
    hra=0.2*bs;
    da=0.1*bs;
    ta=0.05*bs;
    gs=bs+hra+da+ta;
    d=gs*0.08;
    ns=gs-d;
    printf("HRA: %d\n",hra);
    printf("DA: %d\n",da);
    printf("Transport Allowance: %d\n",ta);
    printf("Gross Salary: %d\n",gs);
    printf("Deduction: %d\n",d);
    printf("Net Salary: %d",ns);
    return 0;
}