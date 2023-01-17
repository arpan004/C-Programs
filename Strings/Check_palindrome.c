#include <stdio.h> 
#include<string.h>
void check_palindrome_str(char p[]);

int main(){
    char a[20];
    printf("Enter a string\n");
    fgets(a,20,stdin);
    check_palindrome_str(a);
    return 0;
}

void check_palindrome_str(char p[])
{
    int k=strlen(p)-1;
    char q[k];
    int count=0;
    for(int i=0;i<k;i++)
    {
        q[i]=p[k-1-i];
    }
    for(int i=0;i<k;i++)
    {
        if(p[i]==q[i])
        count++;
    }
    if(k==count)
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }
}