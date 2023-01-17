#include <stdio.h> 
#include<string.h>
void count_frequency_str(char p[]);

int main(){
    char a[100];
    printf("Enter a string\n");
    fgets(a,100,stdin);
    count_frequency_str(a);
    return 0;
}

void count_frequency_str(char p[])
{
    int a[123]={0};
    int k=strlen(p)-1;
    for(int i=0;i<k;i++)
    {
        a[p[i]]++;
    }
    for(int i=0;i<123;i++)
    {
        if(a[i]>0)
        printf("Frequency of %c=%d\n",i,a[i]);
    }
}