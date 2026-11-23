#include<stdio.h>
#include<string.h>
int main()
{
    char name[10][50];
    char birthday[10][20];
    char month[20];
    int i;
    printf("\n-----DIGITAL BIRTHDAY ORGANIZER-----\n\n");
    for(i=0;i<10;i++)
    {
    printf("Enter your name: ");
    scanf("%s", name[i]);
    printf("Enter your birth month: ");
    scanf("%s", birthday[i]);
    printf("\n");
    }
    printf("\nEnter the month to display birthdays: ");
    scanf("%s", month);
    printf("\nBirthdays in %s:\n",month);
    for(i=0;i<10;i++)
    {
        if(strcmp(birthday[i],month)==0)
    {
        printf("%s\n",name[i]);
    }
    }
    return 0;
}