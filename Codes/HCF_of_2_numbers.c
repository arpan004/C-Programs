#include <stdio.h> 

int main(){
    int n,m;
    printf("Enter the 1st number ");
    scanf("%d",&n);
    printf("Enter the 2nd number ");
    scanf("%d",&m);
    for(int hcf=n<m?n:m;hcf>=1;hcf--)
    {
        if(n%hcf==0 && m%hcf==0)
        {
            printf("HCF of %d and %d is %d",n,m,hcf);
            break;
        }
    }
    return 0;
}