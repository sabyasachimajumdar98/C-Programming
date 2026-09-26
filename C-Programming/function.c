#include<stdio.h>


//FUNCTION PROTOTYPE
void printHello();


//FUNCTION DEFINATION
void printHello()
{
    //WE CAN ADD MULTIPLE PRINTFs AND THE OUTPUT WILL GIVE THE SAME WITHOUT CHANGING THE CALL STATEMENT
    printf("Hello World\n");
    printf("Hello!! Sabysachi Majumdar\n");
}

//FUNCTION CALL
int main(){
    printHello();
    printHello();
    printHello();
    return 0;

}

