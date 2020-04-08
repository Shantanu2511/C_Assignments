#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n,term=1,sum=0;

    printf("Enter the no: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i*2-1;j++)
        {
            term = term*j;
        }
        sum = sum + term;
        printf("Current i = %d,Factorial = %d and Sum = %d\n",i,term,sum);
        term = 1;
    }

    printf("\nRequired sum = %d\n",sum);

    return 0;
}

