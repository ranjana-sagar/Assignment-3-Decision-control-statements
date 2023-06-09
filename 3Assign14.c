 #include<stdio.h>
 #include<conio.h>
 int main()
 {
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%7==0&&x%3==0)
        printf("divisible by both 7&3");
    else if(x&7==0) 
        printf("divisible by 7");
    else if(x%3==0)
        printf("divisible by 3 only");
    else
        printf("not divisible by both 7 & 3");           
    getch();
    return 0;            
                
 }