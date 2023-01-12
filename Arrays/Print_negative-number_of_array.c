#include <stdio.h> 

int main(){
    int a[6];
    printf("Enter the elements of array\n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<6;i++)
    {
        if(a[i]<0)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}