#include <stdio.h> 

int main(){
    int a1[5],a2[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<5;i++)
    {
        a2[i]=a1[i];
        printf("%d\n",a2[i]);
    }
    return 0;
}