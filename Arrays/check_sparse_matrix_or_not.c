#include <stdio.h> 

int main(){
    int n,m,sum0=0,sum1=0;
    printf("Enter the row an column of a matrix\n");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Enter the elements of a matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)
            {
                sum0++;
            }
            else
            {
                sum1++;
            }
        }
    }
    if(sum0>sum1)
    {
        printf("This matrix is a sparse matrix");
    }
    else
    {
        printf("This matrix is not a sparse matrix");   
    }
    return 0;
}