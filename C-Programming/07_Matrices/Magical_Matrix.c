#include<stdio.h>
int main()
{
    printf("\n----------MAGICAL MATRIX---------\n");
    int i,j,a[10][10];
    int r1,r2,r3,c1,c2,c3;
    printf("Enter the 3x3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    r1=a[0][0]+a[0][1]+a[0][2];
    r2=a[1][0]+a[1][1]+a[1][2];
    r3=a[2][0]+a[2][1]+a[2][2];
    c1=a[0][0]+a[1][0]+a[2][0];
    c2=a[0][1]+a[1][1]+a[2][1];
    c3=a[0][2]+a[1][2]+a[2][2];
    
    if(r1==r2 && r2==r3 && r3==c1 && c1==c2 && c2==c3 && c3==c1)
    {
       printf("MAGICAL MATRIX\n");
    }
    
    else
    {
       printf("NON MAGICAL MATRIX\n");
     }
     
     return 0;
     }