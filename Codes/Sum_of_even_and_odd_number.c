#include <stdio.h> 

int main(){
    int n,i,odd=0,even=0;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            even=even+i;
            continue;
        }
        if(i%2!=0){
            odd=odd+i;
            continue;
        }
    }
    printf("Sum of even number is %d and Sum of odd number is %d",even,odd);
    return 0;
}