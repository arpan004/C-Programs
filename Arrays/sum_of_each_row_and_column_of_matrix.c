#include <stdio.h> 

int main(){
    int n,m,row=0,col=0;
    printf("Enter the row and column of matrix\n");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Enter the elements of matrix\n");
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
            row=row+a[i][j];
        }
        printf("Sum of %d row is %d\n",i,row);
        row=0;
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            col=col+a[i][j];
        }
        printf("Sum of %d col is %d\n",j,col);
        col=0;
    }
    return 0;
}