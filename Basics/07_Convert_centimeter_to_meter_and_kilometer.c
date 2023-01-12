#include<stdio.h> 

int main(){
    int length;
    printf("Enter the length in centimeter ");
    scanf("%d",&length);
    printf("Conversion of centimeter to meter is %f\n",length*0.01);
    printf("Conversion of centimeter to kilometer is %f",length*0.00001);
    
    return 0;
}