#include <stdio.h> 
void add(int ,int ,int (*p)[],int (*q)[]);

int main(){
    int n,m;
    printf("Enter the no. of rows\n");
    scanf("%d",&n);
    printf("Enter the no. of columns\n");
    scanf("%d",&m);
    int a[n][m],b[n][m];
    printf("Enter the elements of 1st matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    add(n,m,a,b);
    return 0;
}

void add(int n,int m,int (*p)[m],int (*q)[m])
{
    int c[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j]=p[i][j]+q[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
}