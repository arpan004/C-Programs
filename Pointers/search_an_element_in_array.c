#include <stdio.h> 
void search_array(int *,int ,int );

int main(){
    int n,num;
    printf("Enter the no. of elements of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of an array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number which you want to search in an array\n");
    scanf("%d",&num);
    search_array(a,n,num);
    return 0;
}

void search_array(int *p,int n,int num)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(p[i]==num)
        {
            printf("Number is found at index %d",i+1);
            break;
        }
    }
    if(i==n)
        {
            printf("Number is not found");
        }
}