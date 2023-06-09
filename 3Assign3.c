#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    x%2?printf("odd number"):printf("even number");
    getch();
    return 0;
}