#include<stdio.h>

int main()
{
    int n;

    printf("Welcome to the sum calculator of series -1+2-3+4-...n\n");
    printf("\nEntet the number: ");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("Required sum is: %d",n/2);
    }
    else
    {
        printf("\nRequired sum is: -%d\n",n/2+1);
    }

    return 0;

}
