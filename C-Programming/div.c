#include<stdio.h>
#include<math.h>
int main() {
    int x,m;
    printf("Enter a number: ");
    scanf("%d", &x);
    m= x%2==0;
    printf("Ans: %d",m);
    return 0;
}