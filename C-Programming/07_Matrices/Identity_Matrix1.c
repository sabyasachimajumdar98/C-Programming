#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("\n-----IDENTITY MATRIX-----\n");
    printf("Input the elements of the matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<2;i++);
    {
        for(j=0;j<2;j++)
        {
            if(a[0][0]==1 && a[1][1]==1 && a[2][2]==1 || a[0][2]==1 && a[1][1]==1 &&a[2][0]==1 )
            {
                printf("Identity Matrix");
                return 0;
            }
            else
            {
                printf("Non-Identity Matrix");
                return 0;
            }
        }
    }

}