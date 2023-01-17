#include <stdio.h> 
#include<math.h>
int main(){
    int num,k,n,m,j,final=0;
    scanf("%d",&num);
    j=num;
    k=log10(num)+1;
    for(int i=1;i<=k;i++)
    {
        n=num%10;
        m=pow(n,k);
        num=num/10;
        final=final+m;
    }
    // printf("%d",final);
    if (final==j)
    {
        printf("Armstrong Number.");
    }
    else
    {
        printf("Not Armstrong.");
    }
    return 0;
}

