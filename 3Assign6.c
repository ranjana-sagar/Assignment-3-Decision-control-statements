#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    x>=y?printf("%d is greater number",x):printf("%d is greater number",y);
    getch();
    return 0;    
}