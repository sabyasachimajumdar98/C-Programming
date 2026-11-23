#include<stdio.h>
int main()
{
    int user,pass=1212;
    printf("---PASSWORD---\n");
    do
    {
        printf("Enter your four digit password: ");
        scanf("%d",&user);
        if(user==pass)
        {
            printf("Unlocked\n");
        }
        else
        {
            printf("Wrong password\n");
        }
    }
    while(user!=pass);
    return 0;
}