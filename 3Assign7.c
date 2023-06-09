#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x,y;
    printf("Enter the coefficient of x^2, x and constant value",a,b,c);
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
    {
        printf("Roots are real and distinct\n");
        x=(-b+sqrt(D))/2*a;
        y=(-b-sqrt(D))/2*a;
        printf("\n%f %f",x,y);
    }
    else if(D==0)
    {
        printf("Roots are real and equal\n");
        x=(-b)/2.0*a;
        printf("\n%f %f",x,x);
    }
    else if(D<0)
    {
        printf("Roots are imaginary or not real\n");
    }
    printf("\n%d value of D",D);
    getch();
    return 0;
}