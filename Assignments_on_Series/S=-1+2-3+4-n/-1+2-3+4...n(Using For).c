#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,sum=0,term;

    printf("Enter the no: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        term = pow(-1,i)*i;
        sum = sum + term;
        printf("Current i = %d, term = %d and sum = %d\n",i,term,sum);
    }
    return 0;
}
