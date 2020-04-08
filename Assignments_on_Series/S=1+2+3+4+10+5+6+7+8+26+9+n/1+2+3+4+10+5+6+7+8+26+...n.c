#include<stdio.h>

int main()
{
    int n,i,term = 1,sum=0,sum1=0;

    printf("Enter the no of terms: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%5!=0)
        {
            printf("\nAdding term = %d ",term);
            sum1 = sum1 + term;
            sum = sum + term;
            term++;
        }
        else
        {
            printf("\nAdding term = %d \n",sum1);
            sum = sum + sum1;
            sum1 = 0;
        }
    }
    printf("\nRequired sum = %d",sum);
}
