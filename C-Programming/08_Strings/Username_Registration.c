#include<stdio.h>
#include<string.h>
int main()
{
    char extname[50]="Sayantini";
    char name[80];
    printf("\n-----USERNAME REGISTRATION-----\n\n");
    printf("Enter a Username:");
    scanf("%s",name);
    if(strstr(name,extname)!=0)
    {
        printf("USERNAEM ALREADY TAKEN!!");
    }
    else 
    {
        printf("USERNAME APPROVED!!");  
    }
    return 0;
}