#include <stdio.h> 
#include<string.h>
void toggle_str(char p[]);

int main(){
    char a[10];
    printf("Enter a string\n");
    fgets(a,10,stdin);
    toggle_str(a);
    puts(a);
    return 0;
}

void toggle_str(char p[])
{
    int k;
    k=strlen(p);
    for(int i=0;i<k-1;i++)
    {
        if(p[i]>=65 && p[i]<=90)
        {
            p[i]=p[i]+32;
        }
        else
        {
            p[i]=p[i]-32;
        }
    }
}