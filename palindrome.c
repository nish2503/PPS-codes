
#include <stdio.h>

int main()
{
    int n, remainder, reverse=0, original;
    printf("Enter number:");
    scanf("%d",&n);
    original=n;

    while (n!=0)
    {
    remainder=n%10;
    reverse= reverse*10+remainder;
    n/=10;
    }

    if (original==reverse)
    { printf("Palindrome",original);
    }
    else {
        printf ("Not palindrome",original);
    }

    return 0;
}
