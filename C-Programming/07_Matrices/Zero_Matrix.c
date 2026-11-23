#include<stdio.h>
int main()
{
    int a[2][2];
    int i,j,count=0;
    printf("\n-----ZERO MATRIX-----\n");
    printf("Enter the elements of the matrix: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count==4)
    {
        printf("ZERO MATRIX");
    }
    else
    {
        printf("NON-ZERO MATRIX");
    }
    return 0;
}