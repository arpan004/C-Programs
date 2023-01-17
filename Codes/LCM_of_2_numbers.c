#include <stdio.h> 

int main(){
    int n,m;
    printf("Enter the 1st number ");
    scanf("%d",&n);
    printf("Enter the 2nd number ");
    scanf("%d",&m);
    for(int lcm=(n>m?n:m);lcm<=(n*m);lcm+=(n>m?n:m))
    {
        if(lcm%n==0 && lcm%m==0)
        {
            printf("Lcm of %d and %d is %d",n,m,lcm);
            break;
        }
    }
    return 0;
}