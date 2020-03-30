#include<stdio.h>

int main()
{
    int i,j,b,n,n1,n2;

    printf("Please enter the Odd number of Lines: ");
    scanf("%d",&n);
    n1 = (n+1)/2;
    n2 = n - n1;

    for(i=1;i<=n1;i++)
    {
        for(b=1;b<=n1-i;b++)
        {
            printf(".");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("$");
        }
        printf("\n");
    }

    for(i=1;i<=n2;i++)
    {
        for(b=1;b<=i;b++)
        {
            printf(".");
        }
        for(j=1;j<=2*(n2-i)+1;j++)
        {
            printf("$");
        }
        printf("\n");
    }

    return 0;

}
