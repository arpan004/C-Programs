#include<stdio.h> 

int main(){
    float c;
    printf("Enter the temperature in celcius");
    scanf("%f",&c);
    printf("Conversion value of celcius to farenheit is %f",(c*9/5)+32);
    return 0;
}