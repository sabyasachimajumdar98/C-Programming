#include<stdio.h>
int main(){
    int temp,i,low;
    for(i=1;i<=7;i++)
    {
        printf("Enter Temperature: ");
        scanf("%d",&temp);

        if(i ==1)
        {
            low=temp;
        }
        else if(temp<low)
        {
            low=temp;                        
        }

    }
    printf("Lowest Temperature: %d",low);
    return 0;
}