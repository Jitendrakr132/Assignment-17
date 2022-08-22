#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],i,j,temp;
    printf("Enter the string :");
    gets(s);
    for(i=0;s[i];i++)
    {
        for(j=i+1;s[j];j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("sort string %s",s);
}
