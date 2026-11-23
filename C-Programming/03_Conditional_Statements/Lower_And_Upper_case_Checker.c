#include<Stdio.h>
int main()
{

    char alpha;
    printf("Enter the alphabet: ");
    scanf("%c",&alpha);
    if(alpha>='A'&&alpha<='Z')
    {
        printf("UPPERCASE\n");
    }
    else if(alpha>='a'&&alpha<='z')
    {
        printf("LOWERCASE\n");
    }
return 0;
}
