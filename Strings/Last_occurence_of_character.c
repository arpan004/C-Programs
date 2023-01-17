#include <stdio.h> 
#include<string.h>
void L_occurence(char p[],char c);

int main(){
    char a[100],c;
    printf("Enter a string\n");
    fgets(a,100,stdin);
    printf("Enter a character\n");
    scanf("%c",&c);
    L_occurence(a,c);
    return 0;
}

void L_occurence(char p[],char c)
{
    int k=strlen(p)-1;
    int temp=0;
    for(int i=0;i<k;i++)
    {
        if(p[i]==c)
        {
            temp=i;
        }
    }
    printf("The last occurence of the given character is %d",temp+1);
}