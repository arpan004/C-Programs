#include<stdio.h> 
#include<math.h>
int main(){
    int a,b;
    float c;
    
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    c=pow(a,b);
    printf("Value of a to the power of b is %f",c);
    
    return 0;
}