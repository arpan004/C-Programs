#include <stdio.h> 

int main(){
    int n,m,sum=0;
    printf("Enter the row and coloumn of matrix\n");
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m];
    printf("enter the elements of 1st matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of 2nd matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==b[i][j])
            {
                sum++;
            }
        }
    }
    if(sum==n*m)
    {
        printf("These 2 matrices are equal\n");
    }
    else
    {
        printf("These 2 matrices are not equal\n");
    }
    return 0;
}