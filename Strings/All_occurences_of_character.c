#include <stdio.h> 
#include<string.h>
void All_occurence(char p[],char c);

int main(){
    char a[100],c;
    printf("Enter a string\n");
    fgets(a,100,stdin);
    printf("Enter a character\n");
    scanf("%c",&c);
    All_occurence(a,c);
    return 0;
}

void All_occurence(char p[],char c)
{
    int k=strlen(p)-1;
    printf("All occurences of the given character are ");
    for(int i=0;i<k;i++)
    {
        if(p[i]==c)
        {
            printf("%d ",i+1);
        }
    }
}