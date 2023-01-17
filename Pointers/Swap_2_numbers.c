#include <stdio.h> 
void swap(int *,int *);

int main(){
    int num1,num2;
    printf("Enter the value of 1st number\n");
    scanf("%d",&num1);
    printf("Enter the value of 2nd number\n");
    scanf("%d",&num2);
    printf("Before swapping the value of num1 is %d and num2 is %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After swapping the value of num1 is %d and num2 is %d",num1,num2);
    return 0;
}

void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}