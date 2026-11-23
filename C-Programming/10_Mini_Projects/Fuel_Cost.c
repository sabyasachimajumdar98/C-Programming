#include <stdio.h>
int main()
{
    int m,d,c,tc;
    float fn;
    printf("Enter The Mileage of Your Vehicle: ");
    scanf("%d",&m);
    printf("Enter The Total Distance: ");
    scanf("%d",&d);
    printf("Enter the cost per liter: ");
    scanf("%d",&c);
    fn=d/m;
    printf("Amount of fuel you require: %fL\n",fn);
    tc=fn*c;
    printf("Total expenditure of fuel: %d/-",tc);
    return 0;
}
