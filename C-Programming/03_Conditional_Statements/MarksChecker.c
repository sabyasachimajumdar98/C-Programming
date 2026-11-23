#include<stdio.h>
int main() {
    float mks;
    printf("To check whether marks are above 80\n");
    printf("Enter your marks: ");
    scanf("%f",&mks);
    if(mks>80){
        printf("Marks are above 80");      
    }
    else{
        printf("Marks are below 80");
    }
    return 0;
}