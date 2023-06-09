#include<stdio.h>
#include<conio.h>
int main()
{
    float CP,SP,x,p;
    printf("Enetr the Cost price and Selling price of product:");
    scanf("%f%f",&CP,&SP);
    if(SP>CP)
    {
        x=SP-CP;
        printf("profit is %.2f%%",x/CP*100);
    }
    else
    {
        x=CP-SP;
        printf("loss of %.2f%%",x/CP*100);
    }
    getch();
    return 0;

}