#include <stdio.h> 

int main(){
    int n,pos,element;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of an array of index %d\n",i);
        scanf("%d",&a[i]);
    }
    printf("Before Inserting, the array look like\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\nEnter the position where you want to insert the element of an array\n");
    scanf("%d",&pos);
    printf("Enter the element which you want to insert in the above postition\n");
    scanf("%d",&element);
    for(int i=n;i>pos-1;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=element;
    printf("After sorting, the array looks like\n");
    for(int i=0;i<n+1;i++)
    {
        printf("%d  ",&a[i]);
    }
    return 0;
}