#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[30],i;
    printf("Enter the string ");
    gets(s);
  for(i=0;s[i];i++)
    {
    if(s[i]>=97&&s[i]<=122)
     s[i]=s[i]-32;
    }
         printf("%s",s);

}

