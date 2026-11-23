#include<stdio.h>
int main()
{
    float inr,nrp;
    int choice;
    printf("\n-----CURRENCY CONVERTER-----\n\n");
    printf("Enter 1 for INR to NRP conversion\n");
    printf("Enter 2 for NRP to INR conversion\n");
    printf("\nEnter (1/2)= ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\n\n-:INR to NRP:-\n");
        printf("Enter the amount:");
        scanf("%f",&inr);
        nrp=inr*1.60;
        printf("NRP=%.2f/-",nrp);

        case 2:
        printf("\n\n-:NRP to INR:-\n");
        printf("Enter the amount:");
        scanf("%f",&nrp);
        inr=nrp/1.60;
        printf("INR=%.2f/-",inr);

    }
return 0;
}