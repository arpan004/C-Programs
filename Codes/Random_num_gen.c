#include <stdio.h> 
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int number;
    number=rand()%100+1;//now it will give you a number betwen 1 to 100;
    printf("%d",number);
    return 0;
}