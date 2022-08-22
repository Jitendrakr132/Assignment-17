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
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')||(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
            c++;
    }
    printf("string length =%d",c);
}

