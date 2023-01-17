#include <stdio.h> 
void concat_str(char*,char*);
int main(){
    char a[20],b[10];
    printf("Enter 1st string\n");
    fgets(a,20,stdin);
    printf("Enter 2nd string\n");
    fgets(b,10,stdin);
    concat_str(a,b);
    puts(a);
    return 0;
}

void concat_str(char*p,char*q)
{
    int i,j;
    for(i=0;p[i];i++);
    for(j=0;q[j]!='\n';j++)
    {
        p[j+(i-1)]=q[j];
    }
    p[j+(i-1)]='\0';
}