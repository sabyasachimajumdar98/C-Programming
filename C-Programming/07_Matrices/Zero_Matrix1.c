#include<stdio.h>
int main()
{
    int a[2][2];
    int i,j;
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
            if(a[i][j]!=0)
            {
               printf("NON-ZERO MATRIX");
            }
            else
            {
               printf("ZERO MATRIX");
            }
    return 0;
        }
    }
    
}