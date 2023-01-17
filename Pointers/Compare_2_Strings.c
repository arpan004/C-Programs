#include <stdio.h> 
int cmp_str(char *,char*);

int main(){
    char a[10],b[10];
    printf("Enter 1st string\n");
    fgets(a,10,stdin);
    printf("Enter 2nd string\n");
    fgets(b,10,stdin);
    int c=cmp_str(a,b);
    printf("%d",c);
    return 0;
}

int cmp_str(char *p,char*q)
{
    int n,m;
    for(n=0;p[n];n++);
    for(m=0;q[m];m++);
    int k=n>m?n:m;

    for(int i=0;i<k-2;i++)
    {
        if(p[i]>q[i])
        return 1;
        if(q[i]>p[i])
        return -1;
    }
    return 0;
}