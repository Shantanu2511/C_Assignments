#include<stdio.h>

int main()
{
    int n,i,j;

    printf("Entet the num of lines: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i+1);j++)
        {
            printf("$");
        }
        printf("\n");

    }
}
