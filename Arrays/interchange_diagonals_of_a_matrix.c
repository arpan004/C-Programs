#include <stdio.h> 

int main(){
    int n,temp;
    printf("Enter the order of square matrix\n");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements of matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Before interchange the diagonals,the matrix looks like\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    int i=0;
    for(int j=n-1;j>=0;j--)
    {
        temp=a[i][i];
        a[i][i]=a[i][j];
        a[i][j]=temp;
        i++;
    }
    printf("After interchange the diagonals,the matrix looks like\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}