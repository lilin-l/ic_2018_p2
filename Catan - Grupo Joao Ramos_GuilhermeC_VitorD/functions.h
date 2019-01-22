void drawmap(){
printf("+---------------+---------------+---------------+---------------+\n");
printf("|       #0      |       #1      |       #2      |       #3      |\n");
printf("|      N: D     |      N: D     |      N: D     |      N: D     |\n");
printf("|    S: B(4)    |    S: I(6)    |    S: B(5)    |    S: W(10)   |\n");
printf("|    E: L(11)   |    E: W(12)   |    E: G(9)    |      E: D     |\n");
printf("|      W: D     |    W: L(11)   |    W: W(12)   |    W: G(9)    |\n");
printf("+---------------+---------------+---------------+---------------+\n");
printf("|       #4      |       #5      |       #6      |       #7      |\n");
printf("|    N: B(4)    |    N: I(6)    |    N: B(5)    |    N: W(10)   |\n");
printf("|    S: G(3)    |    S: L(3)    |    S: G(11)   |    S: L(4)    |\n");
printf("|      E: D     |    E: W(10)   |      E: D     |      E: D     |\n");
printf("|      W: D     |      W: D     |    W: W(10)   |      W: D     |\n");
printf("+---------------+---------------+---------------+---------------+\n");
printf("|       #8      |       #9      |       #10     |       #11     |\n");
printf("|    N: G(3)    |    N: L(3)    |    N: G(11)   |    N: L(4)    |\n");
printf("|    S: B(8)    |    S: W(10)   |    S: W(10)   |    S: I(3)    |\n");
printf("|      E: D     |    E: W(9)    |      E: D     |      E: D     |\n");
printf("|      W: D     |      W: D     |    W: W(9)    |      W: D     |\n");
printf("+---------------+---------------+---------------+---------------+\n");
printf("|       #12     |       #13     |       #14     |       #15     |\n");
printf("|    N: B(8)    |    N: W(10)   |    N: W(10)   |    N: I(3)    |\n");
printf("|     S: D      |     S: D      |     S: D      |     S: D      |\n");
printf("|    E: I(5)    |    E: G(2)    |    E: L(6)    |      E: D     |\n");
printf("|      W: D     |    W: I(5)    |    W: G(2)    |    W: L(6)    |\n");
printf("+---------------+---------------+---------------+---------------+\n");
}

/* 
struct [Player1] {

   char Lumber[0];
   char Iron[0];
   char Grain[0];
   char Brick [0];
   char Wool [0];
   
} [one or more structure variables]; 
*/
int state(){


}
int dice(){
  int dice1, dice2;
  srand((unsigned)time(NULL));
  dice1 = rand() % 6 + 1;
  dice2 = rand() % 6 + 1;
  return dice1 + dice2;
}

int input(){
  int a = 0;
  scanf("%d", &a);
  return a;
}
int points(){

}
int lumber(int dice, int settle){
  int c = 0;
  
  if(settle==0){
    if (dice==11){
      c++;
    }
  }
  if(settle==1){
    if (dice==12){
      c++;
    }
  }
  if(settle==5){
    if (dice==3){
      c++;
    }
  }
  if(settle==7){
    if (dice==4){
      c++;
    }
  }
  if(settle==9){
    if (dice==3){
      c++;
    }
  }
  if(settle==11){
    if (dice==4){
      c++;
    }
  }
  if(settle==14){
    if (dice==6){
      c++;
    }
  }

  return c;  
}

int iron(int dice, int settle){
  int c = 0;

  if(settle==1){
    if (dice==6){
      c++; 
    }
  }
  if(settle==5){
    if (dice==6){
      c++;
    }
  }
  if(settle==11){
    if (dice==3){
      c++;
    }
  }
    if(settle==12){
    if (dice==5){
      c++;
    }
  }
  if(settle==13){
    if (dice==5){
      c++;
    }
  }
  if(settle==15){
    if (dice==3){
      c++;
    }
  }
  return c;
}

int wool(int dice, int settle){
  int c = 0;

  if(settle==1){
    if (dice==11){
      c++; 
    }
  }

  if(settle==2){
    if(dice==12){
      c++;
    }
  }

  if(settle==3){
    if (dice==9){
      c++;
    }
  }
  if(settle==5){
    if (dice==10){
      c++;
    }
  }
  if(settle==6){
    if (dice==10){
      c++;
    }
  }
  if(settle==7){
    if (dice==10){
      c++;
    }
  }
  if(settle==9){
    if (dice==9){
      c++;
    }
    if (dice==10){
      c++;
    }
  }
  if(settle==10){
    if (dice==10){
      c++;
    }
    if (dice==9){
      c++;
    }
  }
  if(settle==13){
    if (dice==10){
      c++;
    }
  }
  if(settle==14){
    if (dice==10){
      c++;
    }
  }
  if(settle==15){
    if (dice==6){
      c++;
    }
  }
  return c;
}

int brick(int dice, int settle){
  int c = 0;

  if(settle==2){
    if (dice==5){
      c++;
    }
  }
  if(settle==4){
    if (dice==3){
      c++;
    }
  }
  if(settle==6){
    if (dice==5){
      c++;
    }
  }
  if(settle==8){
    if (dice==8){
      c++;
    }
  }
    if(settle==12){
    if (dice==8){
      c++;
    }
  }
  return c;
}

int grain(int dice, int settle){
  int c = 0;

    if(settle==0){
    if (dice==4){
      c++;
    }
  }
  if(settle==2){
    if (dice==9){
      c++;
    }
  }
  if(settle==3){
    if (dice==10){
      c++;
    }
  }
  if(settle==4){
    if (dice==4){
      c++;
    }
  }
  if(settle==6){
    if (dice==11){
      c++;
    }
  }
  if(settle==8){
    if (dice==3){
      c++;
    }
  }
  if(settle==10){
    if (dice==11){
      c++;
    }
  }
  if(settle==13){
    if (dice==2){
      c++;
    }
  }
  if(settle==14){
    if (dice==2){
      c++;
    }
  }
  return c;
}

int printresources(int l, int i, int w, int b, int g, int p){
  printf("Lumber: %d\n", l);
  printf("Iron: %d\n", i);
  printf("Wool: %d\n", w);
  printf("Brick: %d\n", b);
  printf("Grain: %d\n", g);
  printf("Points: %d\n", p);
}

int newsettle(int l, int settle){
  printf("Building available. Build a settlement? 1 for yes, 2 for no\n");
  if (input()==1) {
    drawmap();
    printf("Where do you want to build your new settlement? (0-15)\n");
    int settle = input();
    return settle;
  }
}
