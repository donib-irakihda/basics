//To find whether a given year is leap or not using conditional operator

#include<stdio.h>
#include<conio.h>
int main()
{
   int y;
    printf("Enter a year\n");
    scanf("%d",&y);
    (y%100==0&&y%400==0)?(printf("%d is aleap year",y)):((y%4==0)?(printf("%d is a leap year",y)):(printf("%d is not a leap year",y)));
    
    getch();
}