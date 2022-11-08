/** pex3functs.c
 * =============================================================
 * Name: Your Name
 * Section:  Your Section
 * Project:  FILL IN
 * Purpose:  FILL IN
 * ============================================================= */
#include <stdbool.h>
#include "pex3functs.h"
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/** 
 * @brief Converts an integer to binary, and gets a specific bit from the number
 *        the rightmost bit is bit 0.  This function works--don't break it!
 * @param value the integer we want to convert to binary
 * @param bit the bit we want to extract from the binary
 * @return a 1 or a 0, depending on what value is stored at the specified bit
 */ 
int getBit(int value, int bit) {
    //unsigned int unsigned_value = value;
    unsigned int mask = 0b00000000000000000000000000000001 << bit;
    return (value & mask) >> bit;
}

char** createBoard(int numRows, int numCols){
    char ** ogboard = NULL;
    ogboard = (char**) malloc(numRows * sizeof(char*));
    for (int i = 0; i < numCols; i++){
        ogboard[i] = (char*) malloc(numCols * sizeof(char));
    }
    for (int j = 0; j < numRows; j++){
        for (int i = 0; i < numCols; i++){
            ogboard[j][i] = BLANK;
        }
    }
    ogboard[0][numCols/2] = FILLED;
    return ogboard;
}

char** copyBoard(char** originalBoard, int numRows, int numColumns){
       char** mycopyboard = NULL;
       mycopyboard = (char**) malloc(numRows * sizeof(char*));
       for (int i = 0; i < numColumns; i++){
        mycopyboard[i] = (char*) malloc(numColumns * sizeof(char));
       }
       for (int j = 0; j < numRows; j++){
        for(int i = 0; i < numColumns; i++){

        
        mycopyboard[j][i] = originalBoard[j][i];
       }
    } 
    return mycopyboard;
}
int compareBoards(char** board1, char** board2, int numRows, int numCols){
    int mycount = 0;
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols; j++){
            if(board1[i][j] != board2[i][j]){
                mycount = mycount + 1;
            }
        }
    }
    
    
    return mycount;
}

void freeBoard(char** board, int numRows, int numCols){
    for(int i = 0; i < numRows; i++){
        free(board[i]);
    }
    free(board);
}

void printBoard(char** board, int numRows, int numCols){
        for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            fprintf(stdout,"%c ", board[i][j]);
        }
        fprintf(stdout,"\n");
    }

}

void writeBoardToFile(char** board, int numRows, int numCols, char* filename){
    FILE* myfile = NULL;
    myfile = fopen(filename, "w");
    if(myfile == NULL){
        fprintf(stdout, "could not open\n");
        exit(1);
    }
    for(int i = 0; i < numRows; i++){
        for (int j = 0; j < numCols; j++){
            fprintf(myfile, "%c", board[i][j]);
        }
        fprintf(myfile, "\n");
    }
    fclose(myfile);
}

char** updateBoard(char** board, int automaton, int numRows, int numCols, int rowToUpdate){
    char** dog = copyBoard(board,numRows,numCols);

    if(getBit(automaton, 0 ) == 1){
        for(int i = 0; i < numCols; i++){
            if((board[rowToUpdate - 1][i-1] == '_')&&(board[rowToUpdate - 1][i] == '_')&&(board[rowToUpdate - 1][i + 1]=='_')){
                dog[rowToUpdate][i] = 'x';
            }
        }
    }


    if(getBit(automaton, 1 ) == 1){
        for(int i = 0; i < numCols; i++){
            if((board[rowToUpdate - 1][i-1] == '_')&&(board[rowToUpdate - 1][i] == '_')&&(board[rowToUpdate - 1][i + 1]=='x')){
                dog[rowToUpdate][i] = 'x';
            }
        }
    }

    if(getBit(automaton, 2 ) == 1){
        for(int i = 0; i < numCols; i++){
            if((board[rowToUpdate - 1][i-1] == '_')&&(board[rowToUpdate - 1][i] == 'x')&&(board[rowToUpdate - 1][i + 1]=='_')){
                dog[rowToUpdate][i] = 'x';
            }
        }
    }

    if(getBit(automaton, 3 ) == 1){
        for(int i = 0; i < numCols; i++){
            if((board[rowToUpdate - 1][i-1] == '_')&&(board[rowToUpdate - 1][i] == 'x')&&(board[rowToUpdate - 1][i + 1]=='x')){
                dog[rowToUpdate][i] = 'x';
            }
        }
    }

        if(getBit(automaton, 4 ) == 1){
        for(int i = 0; i < numCols; i++){
            if((board[rowToUpdate - 1][i-1] == 'x')&&(board[rowToUpdate - 1][i] == '_')&&(board[rowToUpdate - 1][i + 1]=='_')){
                dog[rowToUpdate][i] = 'x';
            }
        }
    }
        if(getBit(automaton, 5 ) == 1){
        for(int i = 0; i < numCols; i++){
            if((board[rowToUpdate - 1][i-1] == 'x')&&(board[rowToUpdate - 1][i] == '_')&&(board[rowToUpdate - 1][i + 1]=='x')){
                dog[rowToUpdate][i] = 'x';
            }
        }
    }
        if(getBit(automaton, 6 ) == 1){
        for(int i = 0; i < numCols; i++){
            if((board[rowToUpdate - 1][i-1] == 'x')&&(board[rowToUpdate - 1][i] == 'x')&&(board[rowToUpdate - 1][i + 1]=='_')){
                dog[rowToUpdate][i] = 'x';
            }
        }
    }
    if(getBit(automaton, 7 ) == 1){
        for(int i = 0; i < numCols; i++){
            if((board[rowToUpdate - 1][i-1] == 'x')&&(board[rowToUpdate - 1][i] == 'x')&&(board[rowToUpdate - 1][i + 1]=='x')){
                dog[rowToUpdate][i] = 'x';
            }
        }
    }

    return dog;

}
