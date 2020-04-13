#include<stdio.h>
int main()
{
    int n,sum=0,v;

    printf("Enter the Number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        v = n%10;
        sum = sum + v;
        n = n/10;
        printf("\nValue ie Current adding in Sum = %d, reduced n= %d and sum = %d\n",v,n,sum);
    }
    printf("\nRequired Sum: %d\n",sum);

}
