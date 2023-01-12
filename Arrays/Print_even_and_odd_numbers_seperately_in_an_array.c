#include <stdio.h> 

int main(){
    int n,even=0,odd=0;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element of an array for index %d\n",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[even]=a[i];
            even++;
        }
        else
        {
            c[odd]=a[i];
            odd++;
        }
    }
    printf("Even elements are\n");
    for(int i=0;i<even;i++)
    {
        printf("%d  ",b[i]);
    }
    printf("\nOdd elements are\n");
    for(int i=0;i<odd;i++)
    {
        printf("%d  ",c[i]);
    }
    return 0;
}