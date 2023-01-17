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
    char q[10]="aeiouAEIOU";
    int k,vowels=0,consonants=0;
    k=strlen(p);
    for(int i=0;i<k-1;i++)
    {
        int j;
        for(j=0;j<10;j++)
        {
            if(p[i]==q[j])
            {
                vowels++;
                break;
            }
        }
        if(p[i]!=q[j])
        {
            if(p[i]!=' ')
            consonants++;
        }
    }
    printf("Total no. of vowels are %d\n",vowels);
    printf("Total no. of consonants are %d\n",consonants);
}