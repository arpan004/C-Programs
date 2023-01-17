#include <stdio.h> 

int main(){
	int n=0,m=1,num,j,i;
	printf("Enter the number");
	scanf("%d",&num);
	printf("%d,%d,",n,m);
	for (i=3;i<=num;i++){
		j=n+m;
		printf("%d,",j);
		n=m;
		m=j;
	}
	return 0;
}