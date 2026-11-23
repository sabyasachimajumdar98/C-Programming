#include<stdio.h>
#include<string.h>
int main()
{
    char fn[30]="Sabyasachi ";
    char ln[30]="Majumdar";
    char compare[30]="Admin User";
    strcat(fn,ln);
    printf("\nName: %s\n",fn);
    printf("Number of characters: %d\n",strlen(fn));
    strcpy(ln,fn);
    printf("Copied Name:%s\n",ln);
    if(strcmp(fn,compare)==0)
    {
        printf("Same");
    }
    else
    {
        printf("Different");
    }
    return 0;
}