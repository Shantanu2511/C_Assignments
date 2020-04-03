#include<stdio.h>

int main()
{
    int i,n,sum=0;

    printf("Enter the number of term you want sum of: ");
    scanf("%d",&n);

    for(i=2;i<=n*2;i=i+2)
    {
        sum = sum + i;
    }

    printf("\nSum of %d even terms is = %d\n",n,sum);

    return 0;
}
