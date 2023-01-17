#include <stdio.h> 
void bubblesort(int a[],int n);
int main()
{
    int n;
    printf("Enter the number of variable\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the number of element %d\n",i);
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    return 0;
}


void bubblesort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
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
}