#include <stdio.h> 

int main(){
    int n;
    printf("Enter the order of square matrix\n");
    scanf("%d",&n);
    printf("Enter the elements of matrix\n");
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The upper triangular values of a matrix is\n");
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            printf("%d ",a[i][j+1]);
        }
    }
    return 0;
}