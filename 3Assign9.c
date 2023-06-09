#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:"); 
    scanf("%d%d%d",&a,&b,&c);
    printf("%d is greater number",a>b?a>c?a:c:b>c?b:c);
    getch();
    return 0;
}