#include<stdio.h>

int main()
{
    int n,i,j,b;

    printf("Enter the number of lines: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(b=1;b<=(n-i);b++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("$");
        }
    printf("\n");
    }
}
