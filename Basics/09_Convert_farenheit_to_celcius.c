#include<stdio.h> 

int main(){
    float f;
    printf("Enter the temperature in Farenheit");
    scanf("%f",&f);
    printf("Conversion value of farenheit to Celcius is %f",(f-32)*5/9);
    return 0;
}