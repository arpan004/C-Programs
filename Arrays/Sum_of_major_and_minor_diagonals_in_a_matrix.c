#include <stdio.h> 

int main(){
    int n,s1,s2=0;
    printf("Enter the order of square matrix\n");
    scanf("%d",&n);
    int a[n][n];
    printf("Now Enter the elements of matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        s1=s1+a[i][i];
    }
    printf("Sum of major diagonals of matrix is %d\n",s1);
    int i=0;
    for(int j=n-1;j>=0;j--)
    {
        s2=s2+a[i][j];
        i++;
    }
    printf("Sum of minor diagonals of matrix is %d\n",s2);
    return 0;
}