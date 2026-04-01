#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void){
   
   
   int user_num = 0 ;
   int level = 0 ;
   int max = 0 ;
   char play_or_not = '\0' ;


   do{bool answer = false ;
      int count = 0 ;

      printf("Choose difficulty:\n");
      printf("1. Easy   (1 - 50)\n");
      printf("2. Medium (1 - 100)\n");
      printf("3. Hard   (1 - 200)\nEnter the level: ");
      scanf("%d" , &level) ;
      switch(level){
         case 1 :
            max = 50 ;
            break ;
         case 2 :
            max = 100 ;
            break ;
         case 3 :
            max = 200 ;
            break ;

      }
      srand(time(NULL));
      int random_num = (rand() % max ) + 1;

      while (answer == false){
      printf("Guess the number: ");
      // scanf("%d" , &user_num) ;
      if  (scanf("%d" , &user_num) != 1){
         printf("Invalid input !");
         while(getchar() != '\n');
         continue ;
         
      }
      count ++ ;

      if (user_num == random_num){
         printf("Your guess is correct !! You got it in %d tries.\n" , count);
         answer = true ;
         printf("Do you want to play again? Y OR N ");
         scanf(" %c" , &play_or_not);
      }
      else if (user_num < random_num){
         printf("It's low. try a higher number.\n");

      }
      else if(user_num > random_num){
         printf("It's high. try a lower number.\n");
      }
      }
         
   } while (play_or_not == 'y' || play_or_not == 'Y') ;
      
   return 0 ;
}