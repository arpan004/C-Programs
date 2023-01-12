#include <stdio.h> 

int main(){
    int n,sum;
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
    printf("Sum of lower triangular values of a matrix is\n");
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            sum=sum+a[j+1][i];
        }
    }
    printf("%d",sum);
    return 0;
}