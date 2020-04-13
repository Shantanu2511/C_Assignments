#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the no: ");
    scanf("%d",&n);

    int a[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j] = ((i*n)+1)+j;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
