#include<stdio.h> 

int main(){
    int a,b,c,d,e;
    printf("Enter the marks of 1st subject ");
    scanf("%d",&a);
    printf("Enter the marks of 2nd subject ");
    scanf("%d",&b);
    printf("Enter the marks of 3rd subject ");
    scanf("%d",&c);
    printf("Enter the marks of 4th subject ");
    scanf("%d",&d);
    printf("Enter the marks of 5th subject ");
    scanf("%d",&e);
    int t=a+b+c+d+e;
    printf("Total Marks = %d \n",t);
    printf("Average marks = %f \n",t/5.0);
    printf("Percentage = %f",(t*100.0)/500.0);
    return 0;
}