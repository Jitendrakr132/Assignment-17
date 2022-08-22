#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],s1[20],i;
    printf("Enter the string:");
    gets(s);
    for(i=0;s[i];i++)
    {
        s1[i]=s[i];
    }
    printf("copy string %s",s1);
}
