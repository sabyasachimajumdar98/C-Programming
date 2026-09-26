#include<stdio.h>
int main(){
    int MID,age;
    float fee,height;
    char memtype[10];
    printf("FITNESS CENTRE REGISTRATION\n\n");
    printf("Membership ID: ");
    scanf("%d",&MID);
    printf("Age: ");
    scanf("%d",&age);
    printf("Height: ");
    scanf("%f",&height);
    printf("Membership Type: ");
    scanf("%s",memtype);
    printf("Membership fee: ");
    scanf("%f",&fee);
    printf("\n\n");
    printf("MEMBERSHIP DETAILS\n\n");
    printf("Membership ID: %d\n",MID);
    printf("Age: %d\n",age);
    printf("Height: %.2f\n",height);
    printf("Membership Type: %s\n",memtype);
    printf("Membership fee: %.2f/-",fee);
    return 0;
}