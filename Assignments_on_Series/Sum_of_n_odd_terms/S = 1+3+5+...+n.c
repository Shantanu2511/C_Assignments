#include<stdio.h>

int main()
{
    int i,n,sum=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n*2;i=i+2)
    {
            sum = sum+i;
    }

    printf("\nsum: %d\n",sum);
}
