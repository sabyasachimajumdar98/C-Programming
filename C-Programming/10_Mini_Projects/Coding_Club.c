#include <stdio.h>
int detail(char name[20], int *sem)
{
    printf("ENTER STUDENT NAME: ");
    scanf("%s", name);

    printf("ENTER SEMESTER: ");
    scanf("%d", sem);

    return 0;
}
int reg()
{
    return 200;
}
int dis(int fee, int sem)
{
    if (sem == 1)
    {
        fee = fee - 50;
        printf("\nREGISTRATION FEE: Rs.%d/- *Discount applied*\n\n", fee);
    }
    else
    {
        printf("\nREGISTRATION FEE: Rs.%d/-\n\n", fee);
    }
    return 0;
}

int main()
{
    printf("\n\n-----CODING CLUB-----\n\n");
    int sem, fee;
    char name[20];
    detail(name, &sem);
    fee = reg();
    dis(fee, sem);
    return 0;
}