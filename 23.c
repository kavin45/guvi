#include <stdio.h>
 
int main()
{
 
        int a[50], size, i, max;      
	scanf("%d", &size);
        for (i = 0; i < size; i++)
		scanf("%d", &a[i]);
 
        max=a[0];
 
        for (i = 1; i < size; i++) 
        {
		if (max > a[i])
			max = a[i];
	}
 
        printf("\n %d", max);
 
        return 0;
        }
