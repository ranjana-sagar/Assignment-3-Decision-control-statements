#include<stdio.h>
#include<conio.h>
int main()
{
    int m,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter month number:");
    scanf("%d",&m);
    printf(m>12||m<1?"Invalid month number":m==2?"28 or 29 dayad in feburary":"number of month in this is %d",a[m-1]);
    getch();
    return 0;    
            
}  