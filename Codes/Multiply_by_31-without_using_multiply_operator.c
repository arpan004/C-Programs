#include <stdio.h> 

int main(){
    int a;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("%d",(a<<5)-a);
    return 0;
}