#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int guess = 0, random;
    int guessCount = 0;
    random = rand() % 100 + 1; // Ganerate number between 1 to 100.
     
    printf("\n======== NUMBER GUESSING GAME ========\n");

    do{
        printf("\nGuess a number between 1 to 100 : ");
       int result = scanf("%d",&guess);
         if(result == 1) {
            if(guess >= 1 && guess <= 100){
            guessCount++;
            if(guess < random){
                printf("Too low! Try again.\n");
            }
            else if(guess > random){
                printf("Too high! Try again.\n");
            }
            else{
                printf("\nCongratulations! You guessed the correct number.\n");
                printf("You guessed the number in %d attempts.\n",guessCount);
                printf("\nThank you for playing.\n");
            }
        }
    
       else{
            printf("\nInvalid Input! Please enter number between 1 to 100.\n");
        }
    }
    else{
        printf("\nInvaild Input! Please enter valid number.\n");
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);
    }
    
       
    }while(guess != random);
    return 0;
     
}