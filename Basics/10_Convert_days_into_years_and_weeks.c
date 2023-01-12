#include<stdio.h> 

int main(){
    float d;
    printf("Enter the value of days ");
    scanf("%f",&d);
    printf("Conversion of days into years is %f\n",d/365.0);
    printf("Conversion of days into weeks is %f",d/7.0);
    return 0;
}