#include <stdio.h> 
#include<limits.h>
int main(){
    int a[5];
    int large1=INT_MIN;
    int large2=INT_MIN;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]>large1)
        {
            large2=large1;
            large1=a[i];
        }
        else if (a[i]<large1 && a[i]>large2)
        {
            large2=a[i];
        }
        
    }
    printf("The 2nd largest element of array is %d",large2);
    return 0;
}