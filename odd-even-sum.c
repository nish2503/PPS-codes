#include<stdio.h>
int main()
{
     int n, evensum=0, oddsum=0, i;
     printf("Enter a number");
     scanf("%d",&n);
     
         for (i=1;i<=n;i++)
         { 
             if (i%2==0)
             {
              evensum=evensum+i;
             }
             else
             {
              oddsum=oddsum+i;
             }
      }
      printf("\n Sum of even numbers is %d",evensum);
      printf("\n Sum of odd numbers is %d",oddsum);
         
     return 0;
}
