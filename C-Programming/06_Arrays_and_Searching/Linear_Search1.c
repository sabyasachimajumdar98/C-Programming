#include<stdio.h>
int main()
{
    int a[10],key,n,i,flag=0;
    printf("Linear Search Using Flag\n");
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    printf("Enter the Array Elements: ");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Enter the KEY: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("KEY FOUND!!");
    }
    else
    {
        printf("KEY NOT FOUND!!");
    }
    return 0;
}
