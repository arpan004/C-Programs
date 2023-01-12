#include <stdio.h> 
#include<limits.h>
int main()
{
    int n,max=INT_MIN,b[20000]={0};
    printf("Enter the number of variable\n");
    scanf("%d",&n);
    printf("enter the value of variable\n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    b[max+1];
    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(int i=0;i<max+1;i++)
    {
        if(b[i]>0)
        printf("%d=%d\n",i,b[i]);
    }
    return 0;
}