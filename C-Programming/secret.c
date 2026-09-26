#include<stdio.h>
int main()
{
    int user,game=26;
    printf("---Guess the number game---\n");
    do
    {
        printf("Enter a number between 1to 50: ");
        scanf("%d",&user);
         if(user==game)
         {
            printf("Hurrayyy!! You guessed the correct number\n");
         }
         else
         {
            printf("Oops!! Try again\n");
         }
        }
        while(user!=game);
        return 9;
    }