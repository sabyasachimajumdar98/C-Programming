#include<stdio.h>
int main()
{
    char name[50];
    int confee,medfee,roomfee,total,discount,finalamt;
    printf("Enter patient name: ");
    scanf("%s",name);
    printf("Enter consultation fee: ");
    scanf("%d",&confee);
    printf("Enter medicine charge: ");
    scanf("%d",&medfee);
    printf("Enter room charge: ");
    scanf("%d",&roomfee);
    printf("\nTotal charges: %d\n",total=confee+medfee+roomfee);
    discount =total* 75 / 100;
    finalamt= total-discount;
    printf("Discounted Amount: %d",finalamt);
    return 0;
}