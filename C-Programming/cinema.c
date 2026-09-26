#include<stdio.h>
int main()
{
    int i,age,age1=0,age2=0,age3=0,tage;
    printf("Cinema ticket calculator\n\n");
    printf("Age Below 12:Rs.100/-\n");
    printf("Age between 12 to 59:Rs.200/-\n");
    printf("Age 60 and above:Rs.120/-\n");

    for(i=1;i<=10;i=i+1)
    {
        printf("Enter Age: ");
        scanf("%d",&age);

        if(age<=12)
        {
            age1=age1+100;
            printf("Ticket price= Rs.100/-\n");
        }
        else if(age>12 && age<=59)
        {
            age2=age2+200;
            printf("Ticket price= Rs.200/-\n");
        }
        else if(age>=60)
        {
            age3=age3+120;
            printf("Ticket price= Rs.120/-\n");
        }
        tage=age1+age2+age3;
        
    }
    printf("Total Ticket Collection:Rs.%d/-",tage);
    return 0;
}