#include <stdio.h>
int main()
{
    int i;
    float lowest,temp;
    for(i = 1; i <= 7; i++)
    {
        printf("Enter The Temperature: ");
        scanf("%f", &temp);
        if(i == 1)
        {
            lowest = temp;
        }
        else if(temp < lowest)
        {
          lowest = temp;
        }
    }
    printf("Lowest temperature = %.2f", lowest);
    return 0;
}