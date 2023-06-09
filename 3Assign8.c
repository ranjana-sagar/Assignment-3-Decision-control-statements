#include<stdio.h>
#include<conio.h>
int main()
{
    int y;
    printf("Enter  an year:");
    scanf("%d",&y);
    printf(y%100?y%4?"not leap year":"leap year":y%400?"not leap year":"leap year"); 
    getch();
    return 0;
}    