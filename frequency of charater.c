#include<stdio.h>
#include<string.h>
void frequ(char a[]);
int main()
{
    char a[20],i,size;
    printf("Enter the string");
    gets(a);
    frequ(a);
    return 0;
}
void frequ(char a[])
{
    int  freq[20]={0};
    int i;
    for(i=0;a[i];i++)
    {
     freq[a[i]]++;
    }
    for(i=0;i<20;i++)
    {
    if(freq[i]!=0)
        printf(" %c ==>  %d\n",i,freq[i]);
    }

}

