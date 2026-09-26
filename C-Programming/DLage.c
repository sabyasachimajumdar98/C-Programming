#include<stdio.h>
int main(){
    int age;
    printf("Input your age: ");
    scanf("%d",&age);
    if (age>18){
        printf("Eligible for DL");
    }
    else{ 
        printf("Not Eligible for DL");
    }
    return 0;
}