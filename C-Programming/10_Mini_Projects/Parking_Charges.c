#include<stdio.h>
int main()
{
    int charges=0,time,tcollec=0,security,i;
    printf("\n----Inspiria Parking----\n");
    printf("\nParking Charges:\n");
    printf("Upto 2 hours:Rs.20/-\n");
    printf("3 to 5 hours:Rs.40/-\n");
    printf("Above 5 hours:Rs.60/-\n\n");

    do
    {
    tcollec=0;
    printf("\nEntry Security no.(1-4): ");
    scanf("%d",&security);

    switch(security)
    {
        case 1:
        printf("\nSECURITY 1\n");
        for(i=1;i<=10;i=i+1)
        {
            printf("Enter the duration of the vehicle parked: ");
            scanf("%d",&time);

            if(time<=2)
            {
                charges=20;
            }
            else if(time>=3 && time<5)
            {
                charges=40;
            }
            else if(time>=5)
            {
                charges=60;
            }

            printf("Charges:Rs.%d/-\n",charges);
            tcollec=tcollec+charges;
        }
            printf("\nSECURITY 1 TOTAL COLLECTION:Rs.%d\n",tcollec);
        break;

        case 2:
        printf("\nSECURITY 2\n");
        for(i=1;i<=10;i=i+1)
        {
            printf("Enter the duration of the vehicle parked: ");
            scanf("%d",&time);

            if(time<=2)
            {
                charges=20;
            }
            else if(time>=3 && time<5)
            {
                charges=40;
            }
            else if(time>=5)
            {
                charges=60;
            }

            printf("Charges:Rs.%d/-\n",charges);
            tcollec=tcollec+charges;
        }
            printf("\nSECURITY 2 TOTAL COLLECTION:Rs.%d\n",tcollec);
        break;

        case 3:
        printf("\nSECURITY 3\n");
        for(i=1;i<=10;i=i+1)
        {
            printf("Enter the duration of the vehicle parked: ");
            scanf("%d",&time);

            if(time<=2)
            {
                charges=20;
            }
            else if(time>=3 && time<5)
            {
                charges=40;
            }
            else if(time>=5)
            {
                charges=60;
            }

            printf("Charges:Rs.%d/-\n",charges);
            tcollec=tcollec+charges;
        }
            printf("\nSECURITY 3 TOTAL COLLECTION:Rs.%d\n",tcollec);
        break;

        case 4:
        printf("\nSECURITY 4\n");
        for(i=1;i<=10;i=i+1)
        {
            printf("Enter the duration of the vehicle parked: ");
            scanf("%d",&time);

            if(time<=2)
            {
                charges=20;
            }
            else if(time>=3 && time<5)
            {
                charges=40;
            }
            else if(time>=5)
            {
                charges=60;
            }

            printf("Charges:Rs.%d/-\n",charges);
            tcollec=tcollec+charges;
        }
            printf("\nSECURITY 4 TOTAL COLLECTION:Rs.%d\n\n",tcollec);
        break;
    }
}
    while(security!=4);
return 0;
}