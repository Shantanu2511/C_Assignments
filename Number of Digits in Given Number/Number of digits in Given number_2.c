#include<stdio.h>
#include<math.h>

int main()
{
    int n,a=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    while(pow(10,a)<=n)
    {
        a++;
    }
    printf("\nThe number you entered contains %d digits\n",a);

    return 0;
}
