#include <stdio.h> 
int sum(int *,int *);

int main(){
    int num1,num2,add;
    printf("Enter the value of 1st number\n");
    scanf("%d",&num1);
    printf("Enter the value of 2nd number\n");
    scanf("%d",&num2);
    add=sum(&num1,&num2);
    printf("Addition of 2 number is %d",add);
    return 0;
}

int sum(int *p,int *q)
{
    int c;
    c=*p+*q;
    return c;
}