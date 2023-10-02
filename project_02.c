#include<stdio.h>

int snakeWaterGun(char you, char comp){
   // return 1 if you win, -1 if you lose and 0 if draw

   //condition for draw
   //Cases covered;
   //ss 
   //gg 
   //ww

   if(you == comp){
    return 0;
   }

   // Non-draw condition
   // Cases covered;
   //sg 
   //gs
   //sw
   //ws  
   //gw
   //wg


   if(you=='s' && comp== 'g'){
    return -1;
   }
   else if(you=='g' && comp== 's'){ 
    return 1;
   }

   if(you=='s' && comp== 'w'){
    return 1;
   }
  else if(you=='w' && comp== 's'){
    return -1;
   }

   if(you=='g' && comp=='w'){

    return 1;
   }
   else if(you=='w' && comp=='g'){  
    return -1;
   }

   if(you=='g' && comp=='w'){
    return -1;
   }
   else if(you=='w' && comp=='g'){
    return 1;
   }

}

int main(){
    char you, comp;
    comp = 's';
    printf("Enter's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    if(result ==0){
        printf("Game draw\n");
    }
    else if(result==1){
        printf("You win\n");
    }
    else{
        printf("You lose\n");
    }
    return 0;
}