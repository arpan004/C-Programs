#include <stdio.h> 

int main(){
    int n,pos;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of an array of index %d\n",i);
        scanf("%d",&a[i]);
    }
    printf("Before Deleting, the array look like\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\nEnter the position where you want to delete the element of an array\n");
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}