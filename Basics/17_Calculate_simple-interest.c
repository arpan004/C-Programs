#include<stdio.h> 

int main(){
    int p,r,t;
    printf("Enter the Principal value ");
    scanf("%d",&p);
    printf("Enter the Rate value ");
    scanf("%d",&r);
    printf("Enter Time ");
    scanf("%d",&t);
    printf("Simple Interest is %d",p*r*t/100);
    return 0;
}