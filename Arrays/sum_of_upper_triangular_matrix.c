#include <stdio.h> 

int main(){
    int n,sum=0;
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
    printf("Sum of upper triangular values of a matrix is\n");
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            sum=sum+a[i][j+1];
        }
    }
    printf("%d",sum);
    return 0;
}