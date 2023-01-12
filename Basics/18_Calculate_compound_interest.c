#include<stdio.h> 
#include<math.h>
int main(){
    int p,r,t;
    printf("Enter principal value ");
    scanf("%d",&p);
    printf("Enter rate value ");
    scanf("%d",&r);
    printf("Enter Time ");
    scanf("%d",&t);
    float a= 1+(r/100.0);
    float b=pow(a,t);
    printf("Compound interest = %f",p*b);
    return 0;
}