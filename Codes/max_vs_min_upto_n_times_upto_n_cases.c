#include <stdio.h> 

int main(){
    int t,num,max,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",num);
        for(int j=1;j<=num;j++){
            scanf("%d",&n);
            for(int k=1;k<=n;k++){
                if (n>max){
                    max=n;
                }
                printf("%d",max);
            }
        }
    }
    return 0;
}