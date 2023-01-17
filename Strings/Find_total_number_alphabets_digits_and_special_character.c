#include <stdio.h> 
#include<string.h>
void Count_str(char p[]);

int main(){
    char a[10];
    printf("Enter a string\n");
    fgets(a,10,stdin);
    Count_str(a);
    return 0;
}

void Count_str(char p[])
{
    int k,alpha=0,digits=0,spchr=0;
    k=strlen(p);
    for(int i=0;i<k-1;i++)
    {
        if(p[i]>=65 && p[i]<=90 || p[i]>=97 && p[i]<=122)
        {
            alpha++;
        }
        else if(p[i]>=48 && p[i]<=57)
        {
            digits++;
        }
        else
        {
            spchr++;
        }
    }
    printf("Total no. of alphabets are %d\n",alpha);
    printf("Total no. of digits are %d\n",digits);
    printf("Total no. of special characters are %d\n",spchr);
}