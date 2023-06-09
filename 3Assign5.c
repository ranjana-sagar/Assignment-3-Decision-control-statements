#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    x>99?x<1000?printf("Three digit"):printf("not three digit"):printf("not three digit number");
    getch();
    return 0;
}