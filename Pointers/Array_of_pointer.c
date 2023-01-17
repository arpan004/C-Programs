#include <stdio.h> 

int main(){
    int *p[3];
    int a[2],b[3],c[4];
    p[0]=a;
    p[1]=b;
    p[2]=c;
    int size[3]={2,3,4};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<size[i];j++)
        {
            scanf("%d",*(p+i)+j);
        }
    }
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<size[i];j++)
            {
                printf("%d",*(*(p+i)+j));
            }
            printf("\n");
        }
    return 0;
}