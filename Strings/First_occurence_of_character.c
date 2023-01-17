#include <stdio.h> 
#include<string.h>
void F_occurence(char p[],char c);

int main(){
    char a[100],c;
    printf("Enter a string\n");
    fgets(a,100,stdin);
    printf("Enter a character\n");
    scanf("%c",&c);
    F_occurence(a,c);
    return 0;
}

void F_occurence(char p[],char c)
{
    int k=strlen(p)-1;
    for(int i=0;i<k;i++)
    {
        if(p[i]==c)
        {
            printf("The first occurence of the given character is %d",i+1);
            break;
        }
    }
}