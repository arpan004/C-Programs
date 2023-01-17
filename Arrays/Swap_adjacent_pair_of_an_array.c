#include <stdio.h> 

int main(){
    int n,temp=0;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element of an array of index %d\n",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i=0;i<n-1;i+=2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}
