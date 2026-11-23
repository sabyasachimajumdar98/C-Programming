#include <stdio.h>

int main()
{
    int score[8],high,total=0,count=0,higest;
    int i;

    printf("\n------Game Score Recorder------\n\n");

    for(i=0;i<8;i++)
    {
        printf("The score in round %d: ",i+1);
        scanf("%d", &score[i]);
    }
    high=score[0];
    higest=1;

    for(i=0;i<8;i++)
    {
        if(score[i]>high)
        {
            high=score[i];
            higest=i+1;
        }
    }

    for(i=0;i<8;i++)
    {
        printf("The score recorded for round %d = %d\n",i+1, score[i]);
        total=total+score[i];
    }

     printf("\n------SCORE ANALYSIS OF THE PLAYER------\n");

    printf("\nTotal score in 8 rounds for player Joy = %d", total);
    printf("\nHighest score = %d", high);
    printf("\nHighest score was in round: %d", higest);

    for(i=0;i<8;i++)
    {
        if(score[i]>50)
        {
            count++;
        }
    }

    printf("\nRounds that had score above 50: %d\n",count);

    return 0;
}