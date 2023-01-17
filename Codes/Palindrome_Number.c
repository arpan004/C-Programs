#include <stdio.h> 
#include<math.h>
int main(){
    int n,k,m,j=0;
    scanf("%d",&n);
    m=log10(n)+1;
    int a=n;
    for(int i=1;i<=m;i++){
        k=n%10;
        j=j*10+k;
        n=n/10;
    }
    if(j==a){
        printf("Palindrome.");
    }
    else{
        printf("Not Palindrome.");
    }
    return 0;
}