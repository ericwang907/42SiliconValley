
// A Backtracking program  in C to solve Sudoku problem 
#include <stdio.h>
//#include <stdbool.h>
  
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0 
  
// N is used for the size of Sudoku grid. Size will be NxN 
#define N 9 
  
// This function finds an entry in grid that is still unassigned 
int FindUnassignedLocation(int grid[N][N], int* row, int* col); 
  
// Checks whether it will be legal to assign num to the given row, col 
int isSafe(int grid[N][N], int row, int col, int num); 
  
/* Takes a partially filled-in grid and attempts to assign values to 
  all unassigned locations in such a way to meet the requirements 
  for Sudoku solution (non-duplication across rows, columns, and boxes) */
int SolveSudoku(int grid[N][N]) 
{ 
    int row, col; 
  
    // If there is no unassigned location, we are done 
    if (!FindUnassignedLocation(grid, &row, &col)) 
       return 1; // success! 
  
    // consider digits 1 to 9 
    for (int num = 1; num <= 9; num++) 
    { 
        // if looks promising 
        if (isSafe(grid, row, col, num)) 
        { 
            // make tentative assignment 
            grid[row][col] = num; 
  
            // return, if success, yay! 
            if (SolveSudoku(grid)) 
                return 1; 
  
            // failure, unmake & try again 
            grid[row][col] = UNASSIGNED; 
        } 
    } 
    return 0; // this triggers backtracking 
} 
  
/* Searches the grid to find an entry that is still unassigned. If 
   found, the reference parameters row, col will be set the location 
   that is unassigned, and 1 is returned. If no unassigned entries 
   remain, 0 is returned. */
int FindUnassignedLocation(int grid[N][N], int* row, int* col) 
{ 
    for (*row = 0; *row < N; (*row)++) 
        for (*col = 0; *col < N; (*col)++) 
            if (grid[*row][*col] == UNASSIGNED) 
                return 1; 
    return 0; 
} 
  
/* Returns a boolean which indicates whether an assigned entry 
   in the specified row matches the given number. */
int UsedInRow(int grid[N][N], int row, int num) 
{ 
    for (int col = 0; col < N; col++) 
        if (grid[row][col] == num) 
            return 1; 
    return 0; 
} 
  
/* Returns a boolean which indicates whether an assigned entry 
   in the specified column matches the given number. */
int UsedInCol(int grid[N][N], int col, int num) 
{ 
    for (int row = 0; row < N; row++) 
        if (grid[row][col] == num) 
            return 1; 
    return 0; 
} 
  
/* Returns a boolean which indicates whether an assigned entry 
   within the specified 3x3 box matches the given number. */
int UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num) 
{ 
    for (int row = 0; row < 3; row++) 
        for (int col = 0; col < 3; col++) 
            if (grid[row+boxStartRow][col+boxStartCol] == num) 
                return 1; 
    return 0; 
} 
  
/* Returns a boolean which indicates whether it will be legal to assign 
   num to the given row,col location. */
int isSafe(int grid[N][N], int row, int col, int num) 
{ 
    /* Check if 'num' is not already placed in current row, 
       current column and current 3x3 box */
    return !UsedInRow(grid, row, num) && 
           !UsedInCol(grid, col, num) && 
           !UsedInBox(grid, row - row%3 , col - col%3, num)&& 
            grid[row][col]==UNASSIGNED; 
} 
  
/* A utility function to print grid  */
void printGrid(int grid[N][N]) 
{ 
    for (int row = 0; row < N; row++) 
    { 
       for (int col = 0; col < N; col++) 
             printf("%2d", grid[row][col]); 
        printf("\n"); 
    } 
} 
  
int myGrid[9][9];

void convert_to_int_grid(char** c)
{
    /* Create a 9x9 by grid
    int** grid = malloc(sizeof(int*)*9);
    int i;
    for(i = 0; i < 9; ++i) {
        grid[i] = malloc(sizeof(int)*9);
    }*/
    int i, j;
    for(i = 0; i < 9; ++i) {
        for(j = 0; j < 9; ++j) {
            if(c[i+1][j] == '.') {
                myGrid[i][j] = 0;
            }

            else {
                myGrid[i][j] = c[i+1][j] - 48;
            }
        }
    }
}


/* Driver Program to test above functions */
int main(int ac, char **av) 
{ 
    // 0 means unassigned cells 
    convert_to_int_grid(av);
    printf("input:\n");
    printGrid(myGrid);

    printf("\noutput:\n");
    if (SolveSudoku(myGrid) == 1) 
          printGrid(myGrid); 
    else
         printf("No solution exists"); 
  
    return 0; 
} 