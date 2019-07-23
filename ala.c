#include<stdio.h>
#include<conio.h>
int main()
{
    char n;
    int lowercase,uppercase;
    scanf("%c",&n);
    lowercase=(n=='a'||n=='e'||n=='i'||n=='o'||n=='u');
    uppercase=(n=='A'||n=='E'||n=='I'||n=='O'||n=='U');
    if(lowercase || uppercase)
    {
        printf("alaphabet");
        else
        printf("constant")
    }
    return 0;
}
    