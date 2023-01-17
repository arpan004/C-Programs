#include <stdio.h> 

int main(){
	int n,k=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		k=k+i;
	}
	printf("%d",k);
	return 0;
}