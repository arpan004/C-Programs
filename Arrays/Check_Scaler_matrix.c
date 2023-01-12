#include <stdio.h> 

int main(){
    int n,check,sum=0,sum2=0;
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
    check=a[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]==check)
                {
                    sum++;
                }
            }
            else if(i!=j)
            {
                if(a[i][j]==0)
                {
                    sum2++;
                }
            }
        }
    }
    if(sum==n && sum2==n*(n-1))
    {
        printf("Scaler");
    }
    else
    {
        printf("not scaler");
    }
    return 0;
}