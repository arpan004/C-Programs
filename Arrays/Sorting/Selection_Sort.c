#include <stdio.h> 

int main(){
    int n,min;
    printf("Enter the number of element");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i;j<n;j++)
        {
            if(a[min]>a[j+1])
            {
                int temp;
                temp=a[min];
                a[min]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array is");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}