#include <stdio.h> 
void reverse_array(int*,int );
int main(){
    int n;
    printf("Enter the no. of elements of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of an array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse_array(a,n);
    printf("After reversing the value of an array -\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}

void reverse_array(int*p,int n)
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=p[i];
        p[i]=p[n-1-i];
        p[n-1-i]=temp;
    }
}