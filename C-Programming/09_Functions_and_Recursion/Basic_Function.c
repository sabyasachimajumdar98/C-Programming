#include<stdio.h>
void hello();
void gb();
void hello(){
    printf("HELLO!!\n");
}
void gb(){
    printf("GOOD BYE!!");
}
int main()
{
   hello();
   gb();
   return 0; 
}