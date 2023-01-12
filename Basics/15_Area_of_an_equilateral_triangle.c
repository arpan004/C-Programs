#include<stdio.h> 

int main(){
    int a;
    printf("Enter the side length of an equilateral triangle");
    scanf("%d",&a);
    printf("Area of an eqilateral triangle is %f",(1.732*a*a)/4);
    return 0;
}