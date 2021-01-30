//Project Name : "Guess the number" game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    int number;
    srand(time(0));
    number = rand()%100 + 1;                   //this line will generate number from 1 to 100
    printf("\n");
    int guess;
    int begin;
    int guess_round = 0;
    printf("\n******************************************");
    printf("\nWelcome to ''Guess the number'' challenge");
    printf("\nPress 1 to start the Game\n");
    scanf("%d" , &begin);

    if(begin == 1){
        int guess = 0;
    do
    {
        printf("\nGUESS A NUMBER BETWEEN 1 TO 100, or press 000 to stop\n");
        scanf("%d" , &guess);
      
        if(guess == 000){
            
            exit(0);
        }
        else if(guess < number)
        {
            printf("\nYour guessed a lower number\n");
            
        }
        
        else if(guess > number)
        {
            printf("\nYour guessed a higher number\n");
        }
        else
        {
            printf("\n*****Congratulation*****");
            printf("\n");
            printf("\nYou guessed the right number.");
            printf("\nNumber of guess : %d" , guess_round);
            printf("\n************************");
        }
        guess_round++;
        
    }
    while(guess != number);
    
    }
    else
    {
        printf("***WARNING***\n Please enter right input");
        printf("\n Closing");
    }
    

    return 0;

}
