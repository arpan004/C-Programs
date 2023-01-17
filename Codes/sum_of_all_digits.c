#include <stdio.h> 
#include<math.h>
int main(){
    int n,k,j=0,m;
    scanf("%d",&n);
    m=log10(n)+1;
    for(int i=1;i<=m;i++){
        k=n%10;
        j=j+k;
        n=n/10;
    }
    printf("%d",j);
    return 0;
}