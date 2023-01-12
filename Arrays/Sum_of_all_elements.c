#include <stdio.h> 

int main(){
    int a[6],sum=0;
    printf("Enter the elements of array\n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<6;i++)
    {
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    return 0;
}