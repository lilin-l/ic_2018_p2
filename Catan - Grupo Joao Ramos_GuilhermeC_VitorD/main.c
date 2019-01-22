#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "functions.h"

int main(void){
  int p1L = 0;
  int p1I = 0;
  int p1W = 0;
  int p1B = 0;
  int p1G = 0;
  int p1P = 0;
  int p1settle1 = 17;
  int p1settle2 = 17;
  int p1settle3 = 17;

  int p2L = 0;
  int p2I = 0;
  int p2W = 0;
  int p2B = 0;
  int p2G = 0;
  int p2P = 0;
  int p2settle1 = 17;
  int p2settle2 = 17;
  int p2settle3 = 17;


  printf("o------------------------Settlers of Catan------------------------o\n");
  drawmap();

  printf("Player 1: Where do you want to put your settlement? (0-15)\n");
  int p1settle = input();  
  printf("Player 2: Where do you want to put your settlement? (0-15)\n");
  int p2settle = input();  
  
  printf("Player 1 settlement: %d\n", p1settle);
  printf("Player 2 settlement: %d\n", p2settle);

  while(p1P<4, p2P<4){
    int b = 0;
    printf("=========================================\n");
    printf("Player 1: Press any button roll the dice!\n");
    getchar();
    //sleep(1);
    int p1dice = dice();
    printf("Player 1: You rolled %d\n", p1dice);
    p1L = p1L + lumber(p1dice, p1settle);
    p1I = p1I + iron(p1dice, p1settle);
    p1W = p1W + wool(p1dice, p1settle);
    p1B = p1B + brick(p1dice, p1settle);
    p1G = p1G + grain(p1dice, p1settle);
    p1P = p1P + points();

    /* citten
    p1L = p1L + 2*lumber(p1dice, p1settle);
    p1I = p1I + 2*iron(p1dice, p1settle);
    p1W = p1W + 2*wool(p1dice, p1settle);
    p1B = p1B + 2*brick(p1dice, p1settle);
    p1G = p1G + 2*grain(p1dice, p1settle);
    */
    printresources(p1L, p1I, p1W, p1B, p1G, p1P);
    //else{printf("Player 1: Press s to start your turn\n)");}
    
    //check the rules to know the exact cost of a new settlment or city upgrade and add another print to ask if you WANT to buy another settlemnt
    /*
    if (p1I>3 && p1G>1){
      printf("press u if you want to upgrade your settlement and turn it into city\n");
    }
    */
    if (p1settle1>15){
      if(p1L>0){
      p1settle1 = newsettle(p1L, p1settle1);
      p1L = p1L - 1;
      p1P = p1P + 1;
      }
    }

    if (p1settle2>15){
      if(p1L>0){
      p1settle2 = newsettle(p1L, p1settle2);
      p1L = p1L - 1;
      p1P = p1P + 1;
      }
    }

    if (p1settle3>15){
      if(p1L>0){
      p1settle3 = newsettle(p1L, p1settle3);
      p1L = p1L - 1;
      p1P = p1P + 1;
      }
    }

    if (p2settle3<16){
    printf("You cannot build any more settlements.\n");
    }


    //if (p1settle1>16)
    //  p1L = p1L + lumber(p1dice, p1settle1);
    //  p1I = p1I + iron(p1dice, p1settle1);
    //  p1W = p1W + wool(p1dice, p1settle1);
    //  p1B = p1B + brick(p1dice, p1settle1);
    //  p1G = p1G + grain(p1dice, p1settle1);



    //////////////////////player 2////////////////////////////

    printf("=========================================\n");    
    printf("Player 2: Press any button roll the dice!\n");
    getchar();
    int p2dice = dice();
    printf("Player 2: You rolled %d\n", p2dice);
    p2L = p2L + lumber(p2dice, p2settle);
    p2I = p2I + iron(p2dice, p2settle);
    p2W = p2W + wool(p2dice, p2settle);
    p2B = p2B + brick(p2dice, p2settle);
    p2G = p2G + grain(p2dice, p2settle);
    printresources(p2L, p2I, p2W, p2B, p2G, p2P);

    if (p2settle1>15){
      if(p1L>0){
        p2settle1 = newsettle(p1L, p1settle1);
        p2L = p2L - 1;
        p2P = p2P + 1;
      }
    }

    if (p2settle2>15){
      if(p2L>0){
        p2settle2 = newsettle(p2L, p2settle2);
        p2L = p2L - 1;
        p2P = p2P + 1;
      }
    }

    if (p2settle3>15){
      if(p2L>0){
        p2settle3 = newsettle(p2L, p2settle3);
        p2L = p2L - 1;
        p2P = p2P + 1;
      }
    }

    if (p2settle3<16){
      printf("You cannot build any more settlements.\n");
    }

  }

  if(p1P==4){
    printf("Player 1 wins!");
  }
  if(p2P==4){
    printf("Player2 wins!");
  }
  
}