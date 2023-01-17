#include <stdio.h> 

int main(){
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    if(n1>n2){
        printf("Min=%d ",n2);
        printf("Max=%d ",n1);
    }
    else if(n2>n1){
        printf("Min=%d ",n1);
        printf("Max=%d ",n2);
    }
    return 0;
}