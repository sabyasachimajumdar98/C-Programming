#include<stdio.h>
#include<string.h>
int main()
{
    char email[70];
    printf("\n-----EMAIL VALIDATION-----\n\n");
    printf("Enter a Email:");
    scanf("%s",email);
    if(strchr(email,'@')==0)
    {
        printf("INVALID EMAIL!!\nTRY AGAIN");
    }
    else
    {
        printf("EMAIL APPROVED!!\n");
    }
return 0;
}