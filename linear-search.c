#include <stdio.h>

int main() 
{
    int a[5],i,key,flag=0, loc;
    for(i=0;i<5;i++)
    {
        printf("\n Enter array elements : ");
        scanf("%d",&a[i]);
    }
    printf("Enter number to search : ");
    scanf("%d",&key);
    
    for (i=0;i<5;i++)
    {
        if(a[i]==key)
        {
            loc=i+1;
            flag=1;
            break;
        }
    }
        if (flag==1)
        {
            printf("Number found at %d location",loc);
        }
        else
        {
            printf("Number not found");
        }
       return 0; 
    }
