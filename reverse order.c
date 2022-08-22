#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],i,l,temp;
    int length,count=0;
    printf("Enter the string ");
    gets(s);
    for(i=0;s[i];i++)
    {
            count++;
    }
    l=count;
    for(i=0;i<l/2;i++)
    {
        temp=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=temp;
        }
    printf("%s",s);
    }
