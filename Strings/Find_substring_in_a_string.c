#include <stdio.h> 
#include<string.h>
void find_sb_str(char p[],char q[]);

int main(){
    char str[100] , sbstr[50];
    printf("Enter a string\n");
    fgets(str,100,stdin);
    printf("Enter a sub string\n");
    fgets(sbstr,50,stdin);
    find_sb_str(str,sbstr);
    return 0;
}

void find_sb_str(char p[],char q[])
{
    int k=strlen(q)-1;
    int i,j,r;
    for(i=0;p[i+k];i++)
    {
    	r=i;
        for(j=0;j<k;j++)
        {
            if(q[j]!=p[r])
            {
                break;
            }
            r++;
        }
        if(j==k)
        {
            printf("Substring is found at index %d",i+1);
            break;
        }
    }
    if(j!=k)
        {
            printf("Substring is not found");
        }
}