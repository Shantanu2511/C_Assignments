#include<stdio.h>
int main()
{
    int rev=0,n,temp;

    printf("Enter the num: ");
    scanf("%d",&n);
    temp = n;
    while(n!=0)
    {
        rev = rev*10 + n%10;
        n = n/10;
    }
    if(temp == rev)
    {
        printf("\nEntered num is Palindrome.");
    }
    else
    {
        printf("\nEntered num is not a Palindrome.");
    }

    return 0;
}
