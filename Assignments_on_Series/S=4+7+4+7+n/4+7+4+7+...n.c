#include<stdio.h>

int main()
{
    int n,i,sum=0;

    printf("Series is 4+7+4+7+...n\n");
    printf("\nEnter the no of terms: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum = sum + 4;
            printf("Current i = %d, term = 4 and sum = %d\n",i,sum);
        }
        else
        {
            sum = sum + 7;
            printf("Current i = %d, term = 7 and sum = %d\n",i,sum);
        }
    }

    return 0;
}
