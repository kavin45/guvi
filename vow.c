#include<stdio.h>
#include<conio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if(n=='$')
    {
        printf("Invalid");
        
    }
    else if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    {
        printf("vowel");
    }
    else 
    {
        printf("consonant");
    }
    
    return 0;
}