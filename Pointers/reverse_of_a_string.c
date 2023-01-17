#include <stdio.h> 
#include<string.h>
void reverse_str(char *,int );
int main(){
    char a[10];
    printf("Enter a string\n");
    fgets(a,10,stdin);
    int n=strlen(a);
    reverse_str(a,n);
    return 0;
}

void reverse_str(char *p,int n)
{
    for(int i=n-2;i>=0;i--)
    {
        printf("%c",p[i]);
    }
}