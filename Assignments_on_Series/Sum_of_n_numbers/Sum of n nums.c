#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Enter the num: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }

    printf("\nSum of numbers from 1 to %d is: %d\n",n,sum);
    return 0;
}
