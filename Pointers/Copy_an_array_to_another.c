#include <stdio.h> 
void copy_array(int*,int*,int );

int main(){
    int n;
    printf("Enter the no. of elements of array\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the elements of an array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    copy_array(a,b,n);
    printf("After copying the value of another array is- \n");
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}

void copy_array(int*p,int*q,int n)
{
    for(int i=0;i<n;i++)
    {
        q[i]=p[i];
    }
}