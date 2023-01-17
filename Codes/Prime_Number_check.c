#include <stdio.h> 

int main(){
    int a,i,div=0;
    printf("Enter the number");
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        if(a%i==0){
            div=div+1;
        }
    }
    if(div==2){
        printf("This is a prime number");
    }
    else{
        printf("This is not prime number");
    }
    return 0;
}