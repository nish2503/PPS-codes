#include <stdio.h>

int main()
{
    int n, count=0, i;
    printf("enter a number ");
    scanf("%d",&n);
    for (i=2;i<n;i++)
    { if (n%i==0)
     {
         count++;
     }
    }
    if (count==0) {
     printf("Prime Number");
    } else {
     printf("Not a prime number");
    }
    return 0;
}
