#include<stdio.h> 

int main(){
    int r;
    float pi=3.14;
    printf("Enter the Radius Of circle ");
    scanf("%d",&r);
    printf("Diameter of circle is %d \n",2*r);
    printf("Circumference of circle is %f \n",2*pi*r);
    printf("Area of the circle is %f \n",pi*r*r);
    return 0;
}