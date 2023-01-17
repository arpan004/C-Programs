#include <stdio.h> 

int main(){
    int a;
    printf("Enter the value ");
    scanf("%d",&a);
    if((a&1) ==0){
        printf("No. is even");
    }
    else{
        printf("No. is odd");
    }
    return 0;
}