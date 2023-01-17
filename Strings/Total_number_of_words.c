#include <stdio.h> 
#include<string.h>
void count_words_str(char p[]);

int main(){
    char a[100];
    printf("Enter a string\n");
    fgets(a,100,stdin);
    count_words_str(a);
    return 0;
}

void count_words_str(char p[])
{
    int k=strlen(p)-1;
    int words;
    for(int i=0;i<k;i++)
    {
        if(p[i]==' ')
        {
            words++;
        }
    }
    printf("Total no. of words in a string is %d",words+1);
}