#include<stdio.h> 

int main(){
    int length , breadth;
    printf("Enter the value of length");
    scanf("%d",&length);
    printf("Enter the value of breadth");
    scanf("%d",&breadth);
    printf("Perimeter of rectangle is %d",2*(length+breadth));
    return 0;
}