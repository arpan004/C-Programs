#include<stdio.h> 

int main(){
    int a,b;
    printf("Enter 1st angle of triangle");
    scanf("%d",&a);
    printf("Enter 2nd angle of triangle");
    scanf("%d",&b);
    printf("The third angle of triangle is %d",180-(a+b));
    return 0;
}