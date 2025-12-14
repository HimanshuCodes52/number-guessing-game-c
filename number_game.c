#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  
    int attempt=0,guess;

    int num = (rand() % 100) + 1; 
   



    printf("    __    __ _     __   ___ _    ___    __             _  __ _     __ _     __\n");
    printf("| ||_ |  /  / \\|V||_     | / \\    | |_||_    |\\|| ||V||_)|_ |_)   /__|_||V||_ \n");
    printf("|^||__|__\\__\\_/| ||__    | \\_/    | | ||__   | ||_|| ||_)|__| \\   \\_|| || ||__\n");

    do
    {
    printf("enter the number guessed\n");
    scanf("%d",&guess);
    if(num>guess){
      

    printf(" __    __ __ __ __ _              _  __ _    ___ __   ___ _  _        _    \n");
    printf("/__| ||_ (_ (_ |_ | \\   |\\|| ||V||_)|_ |_)    | (_     | / \\/ \\   |  / \\| |\n");
    printf("\\_||_||____)__)|__|_/   | ||_|| ||_)|__| \\   _|___)    | \\_/\\_/   |__\\_/|^|\n");


    }
    else if(num<guess){
      

    printf(" __    __ __ __ __ _              _  __ _    ___ __   ___ _  _       ___ __   \n");
    printf("/__| ||_ (_ (_ |_ | \\   |\\|| ||V||_)|_ |_)    | (_     | / \\/ \\   |_| | /__|_|\n");
    printf("\\_||_||____)__)|__|_/   | ||_|| ||_)|__| \\   _|___)    | \\_/\\_/   | |_|_\\_|| |\n");

    }
    else{
      printf("YOU GUESSED THE NUMBER CORRECT\n");
   

    }
    attempt++;
    } while (num!=guess);
   printf("you guessed the correct number in %d attempts",attempt);
    
    
    
}
