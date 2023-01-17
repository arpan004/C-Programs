#include <stdio.h> 
#include<string.h>
void copy_str(char *,char*,int );
int main(){
    char a[10],b[10]={' '};
    printf("Enter a string\n");
    fgets(a,10,stdin);
    int m=strlen(a);
    copy_str(a,b,m);
    printf("%s",b);
    return 0;
}
void copy_str(char *p,char*q,int n)
{
    for(int i=0;i<n-1;i++)
    {
        q[i]=p[i];
    }
}