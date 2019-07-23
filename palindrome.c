#include <stdio.h>

int main()
{
 int n,rem=0,sum=0,t;
 scanf("%d",&n);
 t=n;
 while(n!=0)
 {
    rem=n%10;
    sum=sum*10+rem;
    n=n/10;
 }
 if(sum==t)
 {
     printf("yes",sum);
 }
 else
 {
     printf("no",sum);
 }
    return 0;
 }