#include <stdio.h> 

int main(){
     int n,temp;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of an array of index %d\n",i);
        scanf("%d",&a[i]);
    }
    printf("Before Reversing, the array look like\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    for(int i=0;i<n/4;i++)
    {
        temp=a[i];
        a[i]=a[n/2-1-i];
        a[n/2-1-i]=temp;
    }
    printf("\nAfter Reversing the first half elements, the array looks like\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}