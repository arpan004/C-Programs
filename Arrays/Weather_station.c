#include <stdio.h> 
#include<limits.h>
int main()
{
    int a[7],sum=0,avg;
    int h=INT_MIN;
    int c=INT_MAX;
    for(int i=0;i<7;i++)
    {
        printf("Enter Temperature of the day %d ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<7;i++)
    {
        sum=sum+a[i];
        if(a[i]>h)
        {
            h=a[i];
        }
        else if (a[i]<c)    
        {
            c=a[i];
        }
    }
    avg=sum/7;
    printf("Average Temperature of the weeek is %d degree.\n",avg);
    printf("Hottest Temperature of the weeek is %d degree.\n",h);
    printf("Coolest Temperature of the weeek is %d degree.\n",c);
    return 0;
}