#include <stdio.h> 
#include<math.h>
int main(){
    int num,n,k,m,p=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        scanf("%d",&n);
        k=log10(n)+10;
        for(int j=1;j<=k;j++){
            m=n%10;
            p=p+m;
            n=n/10;
        }
        printf("%d\n",p);
        p=0;
    }
    return 0;
}