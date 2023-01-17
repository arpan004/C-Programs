#include <stdio.h> 
void cal_len(char *,int );

int main(){
    char str[10];
    printf("Enter a string\n");
    fgets(str,10,stdin);
    cal_len(str,10);
    return 0;
}

void cal_len(char *p,int n)
{
    int i;
    for(i=0;p[i];i++);
    printf("Length of a string is %d",i-1);
}