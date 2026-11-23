#include<stdio.h>
#include<string.h>
int main()
{
    char word[20]="watch";
    char sentence[120];
    printf("\n-----SENTENCE_ANALYSIS-----\n\n");
    printf("Enter a sentence:");
    scanf("%s",sentence);
    if(strcmp(sentence,word)==0)
    {
        printf("WORDS MATCHED");
    }
    else
    {
        printf("WORDS UNMATECHED");
    }
return 0;
}