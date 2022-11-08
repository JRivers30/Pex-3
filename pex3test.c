/** pex3test.h
 * =============================================================
 * Name: Your Name
 * Section:  Your Section
 * Project:  FILL IN
 * Purpose:  FILL IN
 * ============================================================= */
#include "pex3test.h"
#include "pex3functs.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
void runAllTests() {
    void runAllTest();
    void unitTest01();
    void unitTest02();
    void unitTest03();
    void unitTest04();
    void unitTest05();
    void unitTest06();
}
void unitTest01(){
        assert(compareBoards(board1[i][j], board2[i][j]) == 1); 
            printf("boards are equal\n");
        assert(compareBoards(board1[i][j], board2[i][j]) != 1); 
            printf("boards are not equal\n");
}
void unitTest02(){
        assert(coypboard(mycopyboard[i][j] != originalboard2[i][j]) ); 
            printf("boards are not equal\n");
        assert(coypboard(mycopyboard[i][j] == originalboard2[i][j]) ); 
            printf("boards are not equal\n");
}
void unitTest03(){
        assert(freeBoard(board[i][j],numRows, numColums) ); 
        if(board[i][j] != )
            printf("boards are not free\n");
}
void unitTest04(){
    assert(printBoard(board[i][j],numRows,numcolums) != fprintf(stdout,"%c",board[i][j])); 
    printf("boards did not print\n");
}
