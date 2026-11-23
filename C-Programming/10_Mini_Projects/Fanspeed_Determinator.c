#include<stdio.h>
int main()
{
    int RT,choice,fan;
    printf("\n------SMART FAN CONTROLLER-------\n\n");
    printf("Enter Room Temperature: ");
    scanf("%d",&RT);
    printf("\nPress 1 for Automatic\nPress 2 for Manual\n");
    printf("\nSelect mode: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        if(RT<20)
        {
            printf("FAN SPEED: OFF");
        }
        else if(RT>20 && RT<25)
        {
            printf("FAN SPEED: LOW");
        }
        else if(RT>26 && RT<30)
        {
            printf("FAN SPEED: MEDIUM");
        }
        else
        {
            printf("FAN SPEED: HIGH");
        }
        break;

        case 2:
        printf("\nFan Speeds:\nOFF(1)\nLOW(2)\nMEDIUM(3)\nHIGH(4)");
        printf("\n\nSelect Fan Speed: ");
        scanf("%d",&fan);
        switch(fan)
        {
            case 1:
            {
                printf("Fan Speed: OFF");
            }
            break;
            case 2:
            {
                printf("Fan Speed: LOW");
            }
            break;
            case 3:
            {
                printf("Fan Speed: MEDIUM");
            }
            break;
            case 4:
            {
                printf("Fan Speed: HIGH");
            }
            break;
        }
    }
    return 0;
}