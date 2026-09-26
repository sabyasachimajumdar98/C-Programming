#include <stdio.h>
int main()
{
    int Sunday,Snowing,t;
    printf("Sunday :");
    scanf("%d",&Sunday);
    printf("\nSnowing: ");
    scanf("%d",&Snowing);
    t=Sunday && Snowing;
    printf("Then: %d\n",t);
return 0;
}