#include<stdio.h>
int main()
{
    float h,w,bmi;
    printf("\n-:BMI CALCULATOR:-\n");
    printf("\nEnter your height in meters: ");
    scanf("%f",&h);
    printf("Enter your weight in kgs: ");
    scanf("%f",&w);
    bmi=w/(h*h);
    printf("\n-:RESULTS:-\n");
    printf("BMI: %f\n",bmi);
    if(bmi<18.5){
        printf("Underweight");
    }
    else if(bmi>18.5 && bmi<24.9){
        printf("Healthy Weight");
    }
    
    else if(bmi>25 && bmi<29.9){
        printf("Overweight");
    }
    else if(bmi>30 && bmi<34.9){
        printf("Obese Class I");
    }
    else if(bmi>35 && bmi<39.9){
        printf("Obese Class II");
    }

    else {
        printf("Obese Class III");
    }

    return 0;
}