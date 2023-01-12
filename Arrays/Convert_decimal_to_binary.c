#include <stdio.h> 

int main(){
    int n,a[2000],rem,count=0;
    printf("Enter the number which you want to convert");
    scanf("%d",&n);
    for(int i=0;n!=0;i++)
    {
        rem=n%2;
        a[i]=rem;
        n=n/2;
        count++;
    }
    for(int i=count-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}