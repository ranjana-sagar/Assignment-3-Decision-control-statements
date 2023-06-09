#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    x&1?printf("Odd-number"):printf("Even-number");
    getch();
    return 0;
}