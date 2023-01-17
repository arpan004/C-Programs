#include <stdio.h> 

int main(){
    int n,k=1;
    float p,f=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            k=k*j;
            p=(float)i/k;
        }
        f=f+p;
        k=1;
    }
    printf("%f",f);
    return 0;
}