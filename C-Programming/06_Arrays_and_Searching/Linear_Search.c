#include<stdio.h>
int main()
{
    int a[10],i,n,key;
    printf("Program for Linear Search\n");
    printf("Array Size: ");
    scanf("%d",&n);
    printf("Enter the Array Elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Key: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Key found at index %d\n",i);
            printf("Array position %d",i+1);
            return 0;
        }
    }
    printf("Key Not Found");
    return 0;
}
