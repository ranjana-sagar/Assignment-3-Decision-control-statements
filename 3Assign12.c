#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter a alphabet chracter:");
    scanf("%c",&a);
    a>='A'&&a<='Z'?printf("given Alphabet character is in uppercase-%c",a):printf("%c is in lowercase",a);
    getch();
    return 0;
}