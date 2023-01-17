#include <stdio.h> 
void swap_array(int*,int*,int );

int main(){
    int n;
    printf("Enter the number of elements of an array\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the elements of 1st array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of 2nd array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    swap_array(a,b,n);
    printf("After swapping the values of 1st array is-\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nAfter swapping the values of 2nd array is-\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}

void swap_array(int*p,int*q,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        temp=p[i];
        p[i]=q[i];
        q[i]=temp;
    }
}