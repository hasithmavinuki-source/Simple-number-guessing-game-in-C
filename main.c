#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>



int main(void){
   srand(time(NULL));
   int random_num = (rand() % 100 ) + 1;
   bool answer = false ;
   int user_num = 0 ;
   int count = 0 ;


   while (answer == false){
      printf("\nGuess a number. (1 - 100)  ");
      scanf("%d" , &user_num) ;
      count ++ ;

      if (user_num == random_num){
         printf("Your guess is correct !! You got it in %d tries.\n" , count);
         answer = true ;
      }
      else if (user_num < random_num){
         printf("It's low. try a higher number.\n");

      }
      else if(user_num > random_num){
         printf("It's high. try a lower number.\n");
      }
      
      else {
         printf("Invalid input ! Try again.\n");
      }


   }
      
   return 0 ;
}