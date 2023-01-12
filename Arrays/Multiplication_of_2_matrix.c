#include <stdio.h> 

int main(){
    int n1,n2,m1,m2;
    printf("Enter the rows and columns of a matrix\n");
    scanf("%d %d",&n1,&m1);
    printf("Enter the rows and columns of b matrix\n");
    scanf("%d %d",&n2,&m2);
    int a[n1][m1],b[n2][m2],c[n1][m2];
    printf("Enter the elements of a matrix\n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of b matrix\n");
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(m1==n2)
    {
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m2;j++)
            {
                c[i][j]=0;
                for(int k=0;k<m1;k++)
                {
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                }
            }
        }
        printf("Multiplication of matrix is \n");
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m2;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Please enter correct form of matrix\nIn this order multiplication of matrix is not possible");
    }
    return 0;
}