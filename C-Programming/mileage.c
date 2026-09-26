#include<stdio.h>
int main(){
    float dist,fuel,mil;
    printf("\nMILEAGE CALCULATOR\n");
    printf("Steps to be done by the user:-\n");
    printf("1.Fill the tank completely\n");
    printf("2.Reset the trip meter to zero\n");
    printf("3.Drive normally\n");
    printf("4.Refill the tank again completely\n");
    printf("5.Take the readings of total distance and liters of fuel taken by the vehicle\n\n");
    printf("Enter the Distance: ");
    scanf("%f",&dist);
    printf("Enter the amount of Fuel in liters: ");
    scanf("%f",&fuel);
    mil=dist/fuel;
    printf("Mileage: %.2f kmpl\n",mil);
    if(mil>=30){
        printf("Your Mileage is Good");
    }
    else if(mil>=15 && mil<=29){
        printf("Your Mileage is Average");
    }
    else{
        printf("Your Mileage is Bad");
    }
    return 0;
}