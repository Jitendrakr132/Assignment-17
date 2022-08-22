#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],i,count=0,j=0,l=0;
    printf("Enter the string :");
    gets(s);
    for(i=0;s[i];i++)
    {
        if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))

            count++;
        else if(s[i]>='0'&&s[i]<='9')
            j++;
        else
        {
            l++;
        }
        }
    printf("alphabet %d\n",count);
    printf("digit %d\n",j);
    printf("special character %d\n",l);
}
