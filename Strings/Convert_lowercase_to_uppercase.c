#include <stdio.h> 
#include<string.h>
void convert_str_Lower_2_upper(char p[]);

int main(){
    char a[10];
    printf("Enter a string\n");
    fgets(a,10,stdin);
    convert_str_Lower_2_upper(a);
    puts(a);
    return 0;
}

void convert_str_Lower_2_upper(char p[])
{
    int j;
    j=strlen(p);
    for(int i=0;i<j-1;i++)
    {
        p[i]=p[i]-32;
    }
}