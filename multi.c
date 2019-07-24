#include<stdio.h>
void main()
{
        int sum=1,i,n;
        scanf("%d",&n);
        for(i=1;i<=5;i++)
        {
            sum=i*n;
            printf("%d ",sum);
        }
        
        getch();
}