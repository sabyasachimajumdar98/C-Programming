#include<stdio.h>
int main()
{
    int upin,dpin=1212,choice,age=18;
    char uname[30]="Sabyachi Majumdar",dname[30]="Rahul Ghosh";
    printf("------RAPIDO SIMULATION------\n\n");
    do
    {
        printf("Enter User Pin: ");
        scanf("%d",&upin);
        if(upin==dpin)
        {
            printf("Your pin is correct!Start Ride\n\n");
        }
        else
        {
            printf("Your pin is incorrect.Please Try again\n");
        }
    }
    while(upin!=dpin);
    do
    {
    printf("\t--To Access the Menu--\n");
    printf("1.User Details\n");
    printf("2.Driver's Details\n");
    printf("3.Ride Details\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);
        switch(choice)
    {
        case 1:
        printf("\t--:User Details:--\n");
        printf("Enter your name: %s\n",uname);
        printf("Age: %d\n",age);
        break;

        case 2:
        printf("\t--:Driver's Details:--\n");
        printf("Driver's name:%s\n",dname);
        printf("Vehicle Number: WB 73S6647\n");
        break;

        case 3:
        printf("\t--:Ride Details:--\n");
        printf("Pickup Location: Dabgram\n");
        printf("Drop Location: Shiv Mandir\n");
        break;

        default:
        printf("Oops!Wrong Input");
    }
}
    while(choice !=4);
    return 0;
}