#include<stdio.h>
int main()
{
    int sec,tcollec=0,i,time,charge=0;
    printf("\n-----Institution Parking-----\n");
    printf("\nPakring Charges:\n");
    printf("Upto 2 hours:Rs.20/-\n");
    printf("3 to 5 hours:Rs.40/-\n");
    printf("Above 5 hours:Rs.60/-\n\n");
    
// INPUT FOR SECURITY
    do
    {
    printf("Security(1-3): ");
    scanf("%d",&sec);

// MENU FOR SECURITY
    tcollec=0;
    switch(sec)
    {
        case 1:
        printf("\nSECURITY 1:\n");
        for(i=1;i<=5;i++)
        {
        printf("Enter the duration of vehicle parked: ");
        scanf("%d",&time);

        if(time<=2)
        {
            charge=20;
        }
        else if(time>=3 && time<=5)
        {
            charge=40;
        }
        else if(time>5)
        {
            charge=60;
        }
        printf("Charge:%d\n",charge);
        tcollec=tcollec+charge;
        }
        printf("Security 1 Total Collection:Rs.%d/-\n\n",tcollec);
        break;

        case 2:
        printf("\nSECURITY 2:\n");
        for(i=1;i<=5;i++)
        {
        printf("Enter the duration of vehicle parked: ");
        scanf("%d",&time);

        if(time<=2)
        {
            charge=20;
        }
        else if(time>=3 && time<=5)
        {
            charge=40;
        }
        else if(time>5)
        {
            charge=60;
        }
        printf("Charge:%d\n",charge);
        tcollec=tcollec+charge;
        }
        printf("Security 2 Total Collection:Rs.%d/-\n\n",tcollec);
        break;

        case 3:
        printf("\nSECURITY 3:\n");
        for(i=1;i<=5;i++)
        {
        printf("Enter the duration of vehicle parked: ");
        scanf("%d",&time);

        if(time<=2)
        {
            charge=20;
        }
        else if(time>=3 && time<=5)
        {
            charge=40;
        }
        else if(time>5)
        {
            charge=60;
        }
        printf("Charge:%d\n",charge);
        tcollec=tcollec+charge;
        }
        printf("Security 3 Total Collection:Rs.%d/-\n\n",tcollec);
        break;
    }
}
while(sec!=4);
return 0;
}5678