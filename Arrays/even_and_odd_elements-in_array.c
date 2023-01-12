#include <stdio.h> 

int main(){
    int a[6],even=0,odd=0;
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<6;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Count of even elements in array is %d\n",even);
    printf("Count of odd elements in array is %d",odd);
    return 0;
}