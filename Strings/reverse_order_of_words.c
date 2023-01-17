#include <stdio.h> 
#include<string.h>
void rev_words(char p[]);

int main(){
    char a[100];
    printf("Enter a string\n");
    fgets(a,100,stdin);
    rev_words(a);
    return 0;
}

void rev_words(char p[])
{
    int k=strlen(p)-1;
    int b[k],j=0,t=0;
    char s[k];
    for(int i=0;i<k;i++)
    {
        if(p[i]==' ')
        {
            b[j]=i;
            j++;
        }
    }
    p[k]=' ';
    for(int r=1;r<=j;r++)
    {
        for(int i=(b[j-r])+1;p[i]!=' ';i++)
        {
            s[t]=p[i];
            t++;
        }
        s[t]=' ';
        t++;
    }
    for(int i=0;p[i]!=' ';i++)
    {
        s[t]=p[i];
        t++;
    }
    s[t]='\0';
    puts(s);
}