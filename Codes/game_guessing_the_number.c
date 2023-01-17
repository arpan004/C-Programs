#include <stdio.h> 
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguess=1;
    srand(time(0));
    number = rand()%100+1;
    // printf("Number is %d\n",number);
    printf("Guess the number between 1 to 100\n");
    for (int i=0;guess!=number;i++){
        scanf("%d",&guess);
        if (guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("Congrats you guess the correct number with in %d attempts",nguess);
        }
        nguess++;
    } 
    return 0;
}