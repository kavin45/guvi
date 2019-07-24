#include <stdio.h>
int main()
{
    int num, originalNumber, rem, sum = 0;
   
    scanf("%d", &num);
    originalNumber = number;
    while (originalNumber != 0)
    {
        rem= originalNumber%10;
        sum += rem*rem*rem;
        originalNumber /= 10;
    }
    if(sum == num)
        printf("%d yes",num);
    else
        printf("%d no",num);
    return 0;
}