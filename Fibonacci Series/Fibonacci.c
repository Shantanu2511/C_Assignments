#include<stdio.h>

int main()
{
    int n,i,p,q,fib;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    p = 0;
    q = 1;

    if(n>=1)
    {
        printf("%d\n",p);
    }
    if(n>=2)
    {
        printf("%d\n",q);
    }

    for(i=3;i<=n;i++)
    {
        fib = p+q;
        printf("%d\n",fib);
        p = q;
        q = fib;
    }

    return 0;
}
