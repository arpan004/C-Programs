#include <stdio.h> 
#include<string.h>
void count_occurence(char p[],char c);

int main(){
    char a[100],c;
    printf("Enter a string\n");
    fgets(a,100,stdin);
    printf("Enter a character\n");
    scanf("%c",&c);
    count_occurence(a,c);
    return 0;
}

void count_occurence(char p[],char c)
{
    int k=strlen(p)-1;
    int temp=0;
    for(int i=0;i<k;i++)
    {
        if(p[i]==c)
        {
            temp++;
        }
    }
    printf("The total count of occurence of the given character is %d",temp);
}