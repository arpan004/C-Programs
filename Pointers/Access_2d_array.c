#include <stdio.h> 
void input(int ,int ,int (*p)[]);
void display(int ,int ,int (*p)[]);

int main(){
    int n,m;
    printf("Enter the no. of rows\n");
    scanf("%d",&n);
    printf("Enter the no. of columns\n");
    scanf("%d",&m);
    int a[n][m];
    printf("Enter the elements of an array\n");
    input(n,m,a);
    display(n,m,a);
    return 0;
}

void input(int n,int m,int (*p)[m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",(*(p+i)+j));
        }
    }
}

void display(int n,int m,int (*p)[m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d",*(*(p+i)+j));
        }
        printf("\n");
    }
}