#include <stdio.h> 
void input(int *p,int n);
void display(int *p,int n);

int main(){
    int num;
    printf("Enter the number of elements in an array\n");
    scanf("%d",&num);
    int a[num];
    input(a,num);
    display(a,num);
    return 0;
}

void input(int *p,int n)
{
    printf("Enter the values of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
}

void display(int *p,int n)
{
    printf("The values of an array is -\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
}