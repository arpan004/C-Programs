#include <stdio.h> 
#include<string.h>
void reverse_str(char p[]);

int main(){
    char a[20];
    printf("Enter a string\n");
    fgets(a,20,stdin);
    reverse_str(a);
    return 0;
}

void reverse_str(char p[])
{
    int k=strlen(p)-1;
    char q[k];
    for(int i=0;i<k;i++)
    {
        q[i]=p[k-1-i];
    }
    q[k]='\0';
    puts(q);
}