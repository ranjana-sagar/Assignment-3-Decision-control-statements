#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    x%5?printf("%d not divisible by 5",x):printf("%d divisible by 5",x);
    return 0;
}