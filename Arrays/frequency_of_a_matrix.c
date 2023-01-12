#include <stdio.h> 
#include<limits.h>
int main(){
    int n,m,max=INT_MIN,b[200000]={0};
    printf("Enter the row and column of a matrix\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements of a matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
    }
    b[max+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            b[a[i][j]]++;
        }
    }
    for(int i=0;i<max+1;i++)
    {
        if(b[i]>0)
        {
            printf("%d=%d ",i,b[i]);
        }
    }
    return 0;
}