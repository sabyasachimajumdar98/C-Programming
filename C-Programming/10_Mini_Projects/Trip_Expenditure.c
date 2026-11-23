#include<stdio.h>
int main()
{
  int d,c,te;
  printf("Enter the total distance to be covered in km: ");
  scanf("%d",&d);
  printf("Enter the cost of fuel per litre: ");
  scanf("%d",&c);
  te=d*c;
  printf("The total expenditure of the trip is :%d",te);
  return 0;
}