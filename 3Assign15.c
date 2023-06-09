#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Entera a number:");
    scanf("%d",&a);
    printf(a>0?"positive number":a<0?"negative number":"zero");
    getch();
    return 0;   
}