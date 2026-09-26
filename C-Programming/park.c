#include <stdio.h>

int main(){
    int car=20;

    printf("Parking Lot\n");

    car++;
    printf("One car enters,cars= %d\n",car);

    car--;
    printf("One car leaves,cars= %d\n",car);

    return 0;
}