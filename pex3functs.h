/** pex3functs.h
 * =============================================================
 * Name: Your Name
 * Section:  Your Section
 * Project:  FILL IN
 * Purpose:  FILL IN
 * ============================================================= */

#define BLANK '_'
#define FILLED 'x'

char** createBoard(int numRows, int numCols);

char** copyBoard(char** originalBoard, int numRows, int numCols);

int compareBoards(char** board1, char** board2, int numRows, int numCols);

void freeBoard(char** board, int numRows, int numCols);

void printBoard(char** board, int numRows, int numCols);

void writeBoardToFile(char** board, int numRows, int numCols, char* filename);

char** updateBoard(char** board, int automaton, int numRows, int numCols, int rowToUpdate);