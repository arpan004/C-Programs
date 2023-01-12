#include <stdio.h> 

int main(){
    int a[2][3],col;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        col=0;
        for(int j=0;j<2;j++)
        {
            col=col+a[j][i];
        }
        printf("%d\n",col);
    }
    return 0;
}


// #include <stdio.h> 

// int main(){
//     int a[5];
//     printf("Enter the elements of 1st array");
//     for(int i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the elements of 2nd array");
//     int a2[5];
//     for(int i=0;i<5;i++)
//     {
//         scanf("%d",&a2[i]);
//     }

//     return 0;
// }