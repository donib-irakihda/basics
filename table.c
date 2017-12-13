#include<stdio.h>
#include<conio.h>
int main()
{
    int n, a=1;
    printf("Which table do you want? ");
    scanf("%d",&n);
    printf("\t The table of %d is\n",n);
    while(a<=10)
    {
        
    printf("\t %d * %d = %d\n",n,a,a*n);
    a++;
    }
    getch();
}