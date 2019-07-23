#include <stdio.h>

int main()
{
    int n,i,temp;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
         temp=1;
         break;
        }
    }
    if(temp==1)
    {
        printf("no");
    }
    else
    {
        if(temp==0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    return 0;
}