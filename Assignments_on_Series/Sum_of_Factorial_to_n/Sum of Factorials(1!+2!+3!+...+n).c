#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j,sum=0,term=1;

    printf("Enter the no: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            term = term * j;
        }
        sum = sum + term;
        printf("\nCurrent i = %d!, Factorial = %d and Sum = %d",i,term,sum);
        term = 1;
    }

    printf("\n\nRequired Sum: %d\n",sum);
    return 0;


}
