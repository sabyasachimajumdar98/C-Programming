#include<stdio.h>
int main()
{
    int x=0,y=0,c;
    printf("\n------ROBOT MOVEMENT------\n");
    printf("1.Up\n");
    printf("2.Down\n");
    printf("3.Right\n");
    printf("4.Left\n");
    printf("5.Stop\n\n");

    while(1)
    {
        printf("Enter your Choice: ");
        scanf("%d",&c);

        switch(c)
        {
            case 1:
            y++;
            printf("Robot moved up!!\n");
            break;

            case 2:
            y--;
            printf("Robot moved down!!\n");
            break;

            case 3:
            x++;
            printf("Robot moved right!!\n");
            break;

            case 4:
            x--;
            printf("Robot moved left!!\n");
            break;

            case 5:
            printf("Robot stopped!!\n");
            break;

            default:
            printf("Invalid Input.\n");
        }
        printf("Position X= %d,Y= %d\n\n",x,y);
    }

    return 0;
}