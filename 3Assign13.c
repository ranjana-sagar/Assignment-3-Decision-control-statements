#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    x%6?printf("not divisible"):printf("divisible by 3 and 2");
    getch();
    return 0;
}