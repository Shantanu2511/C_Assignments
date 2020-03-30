#include<stdio.h>

int main()
{
    int i,j,b,n;

    printf("Enter the number of lines: ");
    scanf("%d",&n);
    printf("\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(b=1;b<=(2*n)-(2*i);b++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
