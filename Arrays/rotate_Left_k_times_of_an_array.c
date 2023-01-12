#include <stdio.h> 

int main(){
    int n,k,temp=0;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements of an array of index %d\n",i);
        scanf("%d",&a[i]);
    }
    printf("\nBefore rotating, the array looks like\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    printf("Enter the number for how many times you want to rotate an array\n");
    scanf("%d",&k);
    printf("\n");
    for(int i=0;i<k;i++)
    {
        temp=a[0];
        for(int j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
    printf("After rotating left for %d times, the array looks like\n",k);
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}