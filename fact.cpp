#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1, n, s=1;
    printf("enter any number ");
    scanf("%d",&n);
    if(n>0)
    {
    while(i<=n)
    {
    s=s*i;
    i++;
        }
        printf("\nfactorial is %d",s);
        }
    
    else
    printf("error negative");
    
    getch();
    

    
}