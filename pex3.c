/** pex3.c
 * =============================================================
 * Name:Jalan Rivers
 * Section:  T!
 * Project:  Pex 3
 * Purpose:  FILL IN
 * Documentation Statement: Recieved help on fucntions from C3C hunter Haines and C3C Andrew Wheatley
 * ============================================================= */
#include <stdbool.h>
#include "pex3functs.h"
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include "pex3test.h"
int main() {
    int row,column,rule;
    
    printf("_______________________________\n");
    printf("wlecome to something generator \n");
    printf("_______________________________\n");

    printf("How Many Rows?:  ");
    scanf("%d", &row);
    printf("How many Columns:  ");
    scanf("%d", &column);
    printf("WHich Rule:   ");
    scanf("%d", &rule);

    char **board = createBoard(row,column);

    int dog = 1;
    char cat = 'a';
    scanf("%c", &cat);
    printBoard(board,row,column);
    while((cat == '\n')&&(dog<row)){
        printf("Iteration Number:  %d\n", dog);
        printf("Press 'Enter' to continue; 'c' to run to completion, 'e' to exit the program\n");
        scanf("%c", &cat);
        board = updateBoard(board,rule,row,column,dog);
        printBoard(board,row,column);
        dog++;
    }
    
    if(cat=='c'){
        while (dog < row){
            board = updateBoard(board,rule,row,column,dog);
            printBoard(board,row,column);
            printf("\n");
            printf("Iteration Number: %d\n", dog);
            dog++;
        }
    }

    printf("\nProgram complete\n");

    if (cat == 'e'){
        printf("\nYou have left the program");
    }
    
    //runAllTest();




    
    return 0;
}