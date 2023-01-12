#include <stdio.h> 
#include <limits.h>
int main(){
    int a[5];
    int j=INT_MIN;
    int s=INT_MAX;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]>j)
        {
            j=a[i];
        }
    }
    printf("Max value of array is %d\n",j);
    for(int i=0;i<5;i++)
    {
        if(a[i]<s)
        {
            s=a[i];
        }
    }
    printf("Min value of array is %d",s);
    return 0;
}