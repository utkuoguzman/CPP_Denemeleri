#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int iSecret, iGuess;

    srand(time(NULL));

    iSecret=rand()%100;

    do{
        printf("Guess the number between 0 and 99: ");
        scanf("%d",&iGuess);
        if(iSecret!=iGuess){
            std::cout<<"try again"<<iSecret<<std::endl;
        }


    } while(iSecret!=iGuess);

    puts ("Congratulations");
    return 0;

}