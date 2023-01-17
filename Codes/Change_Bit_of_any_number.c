#include <stdio.h> 

int main(){
    int n,bit,final,end;
    printf("Enter no.");
    scanf("%d",&n);
    printf("Enter bit");
    scanf("%d",&bit);
    final=1<<(bit-1);
    end = final^n;
    printf("%d",end);
    return 0;
}