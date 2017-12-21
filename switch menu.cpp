#include<stdio.h>
#include<conio.h>
void main()
{
    int i,f,n,c;
    f=1;
    printf("MENU\n1.Find Factorial\n2.Check if it is prime or not\n3.Check if it is even or odd\n4.Exit\n");
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Enter your choice\n");
    scanf("%d",&c);
    switch (c)
    {
        case 1:
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        printf("Factorial = %d",f);
        break;
        case 2:
        for(i=2;i<n;i++)
        {
        if(n%i==0)
        {
        printf("Not Prime");
        break;
        }
        }
        if(i==n)
        {
        printf("Prime");
        }
        break;
        case 3:
        if(n%2==0)
        printf("Even");
        else
        printf("Odd");
        break;
        case 4:
        printf("You entered exit");
        default:
        break;
        
    }
    getch();
}