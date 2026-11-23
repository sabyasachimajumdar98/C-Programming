#include<stdio.h>
int main(){
    int PID,age;
    float fee,body;
    char bloodgrp[10];
    printf("HOSPITAL PATIENT REGISTRATION\n\n");
    printf("Patient's ID: ");
    scanf("%d",&PID);
    printf("Age: ");
    scanf("%d",&age);
    printf("Body Temp: ");
    scanf("%f",&body);
    printf("Blood Group: ");
    scanf("%s",bloodgrp);
    printf("Consultation fee: ");
    scanf("%f",&fee);
    printf("\n\n");
    printf("PATIENT'S INFO\n\n");
     printf("Patient's ID: %d\n",PID);
     printf("Age: %d\n",age);
     printf("Body Temp: %.2f\n",body);
     printf("Blood Group: %s\n",bloodgrp);
     printf("Consultation fee: %.2f/-",fee);
     return 0;
}