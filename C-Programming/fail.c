#include<stdio.h>
int main(){
    int marks,i,pass=0,fail=0;
    for(i=1;i<=10;i=i+1)
    {
        printf("Enter Marks: ");
        scanf("%d",&marks);

        if(marks>=40 && marks<=100){
            pass++;
        }
        else{
        fail++;
        }
        }
        printf("Number of students passed: %d\n",pass);
        printf("Number of students failed: %d\n",fail);
        return 0;
    }
