#include <stdio.h> 

int main(){
    int n,temp;
    printf("Enter the number of variable\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the number of element %d\n",i);
        scanf("%d",&a[i]);
    }
    for(int i=n/2;i<n-1;i++)
    {
        for(int j=n/2;j<n-(i-n/2+1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("After sorting the elements are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}