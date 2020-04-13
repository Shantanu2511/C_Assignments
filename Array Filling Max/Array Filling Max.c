#include<stdio.h>
int main()
{
    int n,i,j;

    printf("Enter the no: ");
    scanf("%d",&n);

    int a[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
            {
                a[i][j] = j;
            }
            else
            {
                a[i][j] = i;
            }
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

}
