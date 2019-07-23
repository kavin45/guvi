#include <stdio.h>

int main()
{
    int n,sum=0,i,a[10],b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
     sum=sum+i;   
    }
    printf("%d",sum);
    return 0;
}
