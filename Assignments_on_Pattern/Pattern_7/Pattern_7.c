#include<stdio.h>

int main()
{
    int i,j,n,n1,n2;

    printf("Please enter the odd number of lines: ");
    scanf("%d",&n);
    n1 = (n+1)/2;
    n2= n - n1;

    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n2;i++)
    {
        for(j=1;j<=n2-i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
