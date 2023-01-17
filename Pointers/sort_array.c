#include <stdio.h> 
void sort_arr(int *,int );
int main(){
    int n;
    printf("Enter the no. of elements in an array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of an array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort_arr(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void sort_arr(int *p,int n)
{
    for(int pass=0;pass<n-1;pass++)
    {
        for(int i=0;i<n-1-pass;i++)
        {
            if(p[i]>p[i+1])
            {
                int temp;
                temp=p[i];
                p[i]=p[i+1];
                p[i+1]=temp;
            }
        }
    }
}