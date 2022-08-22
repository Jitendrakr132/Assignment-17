#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[30],i,c=0;
    printf("Enter the string ");
    gets(s);
    for(i=0;s[i];i++)
    {
        if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
            c++;
    }
    printf("string length =%d",c);
}

