#include<stdio.h>
#include<conio.h>
int main()
{
    int u;
    int b;
    printf("enter your units ");
    scanf("%d",&u);
    if(u>0)
    {
    if(u<=100)
    b=u*40;
    else if (u<=200)
    b=(100*40)+(u-100)*50;
    else
    b=100*40+200*50+(u-300)*50;
    }
    else
    printf("wrong data");
    printf("Your total bill is Rs.%d  include meter charge",b+50);
    getch();
    
}