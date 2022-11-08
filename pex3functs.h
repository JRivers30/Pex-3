/** pex3functs.h
 * =============================================================
 * Name: Your Name
 * Section:  Your Section
 * Project:  FILL IN
 * Purpose:  FILL IN
 * ============================================================= */
#ifndef functions
#define BLANK '_'
#define FILLED 'x'

char** createBoard(int numRows, int numCols);
/**
 * @brief created the board
 * 
 * @param numRows stores the number of rows
 * @param numCols stores the nums of columns
 * @return the created board
 * 
 */
char** copyBoard(char** originalBoard, int numRows, int numCols);
/**
 * @brief copys the board from board 1 to board 2
 * @param originalBoard has the info of the board
 * @param numRows stores the number of rows
 * @param numCols stores the nums of columns
 * @return the created board
 * 
 */
int compareBoards(char** board1, char** board2, int numRows, int numCols);
/**
 * @brief Get the Probality Of Value Or Lower object
 * @param board1 has all the info for the board1
 * @param numRows stores the number of rows
 * @param numCols stores the nums of columns
 * @param board2 has all the info for board 2
 * @return the created board
 * 
 */
void freeBoard(char** board, int numRows, int numCols);
/**
 * @brief frees the info from the board
 * 
 * @param numRows stores the number of rows
 * @param board stores the board info
 * @param numCols stores the nums of columns
 * @return nothing
 * 
 */
void printBoard(char** board, int numRows, int numCols);
/**
 * @brief prints the board info and contents
 * @param board stores the info of the board
 * @param numRows stores the number of rows
 * @param numCols stores the nums of columns
 * @return tnothing
 * 
 */
void writeBoardToFile(char** board, int numRows, int numCols, char* filename);
/**
 * @brief Gwrites the info for the board to a file
 * @param board stores the info for the board
 * @param numRows stores the number of rows
 * @param numCols stores the nums of columns
 * @param filename stores the info for the filename
 * @return nothing
 * 
 */
char** updateBoard(char** board, int automaton, int numRows, int numCols, int rowToUpdate);
/**
 * @brief updates the board
 * @param board sotres the info for the board
 * @param numRows stores the number of rows
 * @param numCols stores the nums of columns
 * @param automaton stores the info for the automaton
 * @return the updated board
 * 
 */
#endif 