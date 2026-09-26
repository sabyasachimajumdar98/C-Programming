 #include<stdio.h>
 int main(){
    int emp,i;
    printf("HIGHEST SALARY\n\n");
    
    for(i=1;i<=5;i=i+1)
    {
        printf("Employee: ");
        scanf("%d",&emp);
    }
        
        if(emp>1)
        {
            printf("Highest Salary: %d",emp);
        }
    
    return 0;
 }