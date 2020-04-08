#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,term=0,sum=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        term = pow(-1,i+1)*i;
        sum = sum + term;
        printf("Current i = %d, term = %d and Sum = %d\n",i,term,sum);
    }

    return 0;
}
