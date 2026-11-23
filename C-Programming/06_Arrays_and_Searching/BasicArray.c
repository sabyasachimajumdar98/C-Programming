#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter array size: ");
    scanf("%d",&size);
    int num[size];

//INPUT

    printf("Enter the numbers:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&num[i]);
    }

//DISPLAY
    
    printf("THE OUTPUT:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
    
}