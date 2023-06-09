#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("Enter the three sides of triangle:");
    scanf("%f%f%f",&a,&b,&c);
    printf(a+b>c&&a+c>b?b+c>a?"valid triangle":"invalid triangle":"invalid triangle");
    getch();
    return 0;
}