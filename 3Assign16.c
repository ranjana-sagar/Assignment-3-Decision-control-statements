#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(c>='A'&&c<='Z')
        printf("%c is a alphabet character(Uppercase)",c);
    else if(c>='a'&&c<='z')
        printf("%c is a alphabet(Lowecase)",c);
    else if(c>='0'&&c<='9')
        printf("%c is a digit character",c); 
    else
        printf("%c is special character",c);    
    getch(); 
    return 0;
}