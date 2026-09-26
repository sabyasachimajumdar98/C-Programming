#include<stdio.h>
int main(){
    int numA,numB;
    printf("\n-:To find the greater of two numbers:-\n\n");
    printf("Emter First number:");
    scanf("%d",&numA);
    printf("Enter Second number: ");
    scanf("%d",&numB);
    if (numA>numB){
        printf("First number is greater");
    }
    else{
        printf("Second number is greater");
    }
    return 0;
}