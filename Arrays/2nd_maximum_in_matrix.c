#include <stdio.h> 
#include<limits.h>
int main(){
    int n,m,max1=INT_MIN,max2=INT_MIN;
    printf("Enter the row and column of a matrix\n");
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
            if(a[i][j]>max1)
            {
                max2=max1;
                max1=a[i][j];
            }
            else if(a[i][j]<max1 && a[i][j]>max2)
            {
                max2=a[i][j];
            }
        }
    }
    printf("The 2nd maximum element of a matrix is %d",max2);
    return 0;
}