#include<stdio.h>

int main()
{
    int n,count=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        count++;
        n = n/10;
    }
    printf("\nThe number you entered contains %d digits\n",count);
}
