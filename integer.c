#include <stdio.h>
#include <stdlib.h>
//Aly Husein CS 2211 Assignment 3 Task 2
int again = 0;
char chosenNum;
char answer = 'Y';
const char segments[10][3][3] =
{{{' ', '_', ' '}, {'|', ' ', '|'}, {'|', '_', '|'}},
 {{' ', ' ', ' '}, {' ', ' ', '|'}, {' ', ' ', '|'}},
 {{' ', '_', ' '}, {' ', '_', '|'}, {'|', '_', ' '}},
 {{' ', '_', ' '}, {' ', '_', '|'}, {' ', '_', '|'}},
 {{' ', ' ', ' '}, {'|', '_', '|'}, {' ', ' ', '|'}},
 {{' ', '_', ' '}, {'|', '_', ' '}, {' ', '_', '|'}},
 {{' ', '_', ' '}, {'|', '_', ' '}, {'|', '_', '|'}},
 {{' ', '_', ' '}, {' ', ' ', '|'}, {' ', ' ', '|'}},
 {{' ', '_', ' '}, {'|', '_', '|'}, {'|', '_', '|'}},
 {{' ', '_', ' '}, {'|', '_', '|'}, {' ', '_', '|'}}};

 int main()
{
  do
  {
  printf("What integer would you like displayed?:\n");
  scanf("%c", &chosenNum);
//Used a switch function so it goes to whatever number they chose and loops back if they want to use it again with the do-while loop
  switch(chosenNum)
  {
    case '0' :
    {
      printf("%c%c%c", segments[0][0][0], segments[0][0][1], segments[0][0][2]);
      printf("\n");
      printf("%c%c%c", segments[0][1][0],segments[0][1][1],segments[0][1][2]);
      printf("\n");
      printf("%c%c%c", segments[0][2][0],segments[0][2][1],segments[0][2][2]);
      printf("\n");
      break;
    }
    case '1' :
    {
      printf("%c%c%c", segments[1][0][0], segments[1][0][1], segments[1][0][2]);
      printf("\n");
      printf("%c%c%c", segments[1][1][0],segments[1][1][1],segments[1][1][2]);
      printf("\n");
      printf("%c%c%c", segments[1][2][0],segments[1][2][1],segments[1][2][2]);
      printf("\n");
      break;
    }
    case '2' :
    {
      printf("%c%c%c", segments[2][0][0], segments[2][0][1], segments[2][0][2]);
      printf("\n");
      printf("%c%c%c", segments[2][1][0],segments[2][1][1],segments[2][1][2]);
      printf("\n");
      printf("%c%c%c", segments[2][2][0],segments[2][2][1],segments[2][2][2]);
      printf("\n");
      break;
    }
    case '3' :
    {
      printf("%c%c%c", segments[3][0][0], segments[3][0][1], segments[3][0][2]);
      printf("\n");
      printf("%c%c%c", segments[3][1][0],segments[3][1][1],segments[3][1][2]);
      printf("\n");
      printf("%c%c%c", segments[3][2][0],segments[3][2][1],segments[3][2][2]);
      printf("\n");
      break;
    }
    case '4' :
    {
      printf("%c%c%c", segments[4][0][0], segments[4][0][1], segments[4][0][2]);
      printf("\n");
      printf("%c%c%c", segments[4][1][0],segments[4][1][1],segments[4][1][2]);
      printf("\n");
      printf("%c%c%c", segments[4][2][0],segments[4][2][1],segments[4][2][2]);
      printf("\n");
      break;
    }
    case '5' :
    {
      printf("%c%c%c", segments[5][0][0], segments[5][0][1], segments[5][0][2]);
      printf("\n");
      printf("%c%c%c", segments[5][1][0],segments[5][1][1],segments[5][1][2]);
      printf("\n");
      printf("%c%c%c", segments[5][2][0],segments[5][2][1],segments[5][2][2]);
      printf("\n");
      break;
    }
    case '6' :
    {
      printf("%c%c%c", segments[6][0][0], segments[6][0][1], segments[6][0][2]);
      printf("\n");
      printf("%c%c%c", segments[6][1][0],segments[6][1][1],segments[6][1][2]);
      printf("\n");
      printf("%c%c%c", segments[6][2][0],segments[6][2][1],segments[6][2][2]);
      printf("\n");
      break;
    }
    case '7' :
    {
      printf("%c%c%c", segments[7][0][0], segments[7][0][1], segments[7][0][2]);
      printf("\n");
      printf("%c%c%c", segments[7][1][0],segments[7][1][1],segments[7][1][2]);
      printf("\n");
      printf("%c%c%c", segments[7][2][0],segments[7][2][1],segments[7][2][2]);
      printf("\n");
      break;
    }
    case '8' :
    {
      printf("%c%c%c", segments[8][0][0], segments[8][0][1], segments[8][0][2]);
      printf("\n");
      printf("%c%c%c", segments[8][1][0],segments[8][1][1],segments[8][1][2]);
      printf("\n");
      printf("%c%c%c", segments[8][2][0],segments[8][2][1],segments[8][2][2]);
      printf("\n");
      break;
    }
    case '9' :
    {
      printf("%c%c%c", segments[9][0][0], segments[9][0][1], segments[9][0][2]);
      printf("\n");
      printf("%c%c%c", segments[9][1][0],segments[9][1][1],segments[9][1][2]);
      printf("\n");
      printf("%c%c%c", segments[9][2][0],segments[9][2][1],segments[9][2][2]);
      printf("\n");
      break;
    }
  }
//Asking whether they'd like to continue using the program
  while ((getchar()) != '\n');
  printf("\nWould you like to continue? Y for Yes, N for No.\n");
  scanf("%c", &answer);
  while ((getchar()) != '\n');
  }
  //Program only continues as long as they answer Y
  while (answer == 'Y');


}
