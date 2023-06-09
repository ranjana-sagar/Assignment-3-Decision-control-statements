#include<stdio.h>
#include<conio.h>
int main()
{
    float  a,b,c,d,e,t;
    printf("Enter the marks of HINDI,ENGLISH,MATH,SCIENCE and SOCIAL SCIENCE subkects:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    printf(a>=33&&b>=33&&c>=33&&d>=33&&e>=33?"you are pass":"you are fail");
    getch();
    return 0;
}
