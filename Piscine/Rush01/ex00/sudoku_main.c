#include <unistd.h>

/* Replaced the "." in our input with 0s so we can have an integer table.
Replacing the 0s with UNASSIGNED for readability. */
#define UNASSIGNED 0 

void ft_putchar(char c)
{
    write(1, &c, 1);
}
  
/* Searches the grid to find the next unassigned location. If 
   there is one, the reference parameters row and col will be set to 
   that location and 1 is returned. If no unassigned entries 
   remain, 0 is returned and Sudoku is solved. */
int FindUnassignedLocation(int grid[9][9], int *row, int *col) 
{ 
    *row = 0;
    while (*row < 9)
    { 
        *col = 0;
        while (*col < 9)
        {
            if (grid[*row][*col] == UNASSIGNED)
                return 1; 
            (*col)++;
        }
        (*row)++;
    }
    return 0; 
} 

/* Determines if the specified number already exists in your row. 
 * 1 is given if it is, and 0 if it isn't. */
int UsedInRow(int grid[9][9], int row, int num) 
{ 
   int col;

   col = 0;
   while (col < 9)
   {
        if (grid[row][col] == num) 
            return 1;
        col++;
   } 
    return 0; 
} 
  
/* Determines if the specified number already exists in your column.
 * 1 is given if it is, and 0 if it isn't. */
int UsedInCol(int grid[9][9], int col, int num) 
{ 
    int row;

    row = 0;
    while (row < 9)
    { 
        if (grid[row][col] == num) 
            return 1;
        row++;
    }
    return 0; 
} 
  
/* Determines if the specified number exists in the 3x3 box. 1 if it is, 
 * 0 if it isn't */
int UsedInBox(int grid[9][9], int boxStartRow, int boxStartCol, int num) 
{ 
    int row;
    int col;

    row = 0;
    col = 0;
    while (row < 3)
    { 
        while (col < 3)
        { 
            if (grid[row+boxStartRow][col+boxStartCol] == num) 
                return 1; 
            col++;
        }
        col = 0;
        row ++;
    }
    return 0; 
} 
  
/* Combines the above three functions. Is it safe to place the number here?
 * 1 if safe. 0 if not safe. */
int isSafe(int grid[9][9], int row, int col, int num) 
{ 
    return !UsedInRow(grid, row, num) && 
           !UsedInCol(grid, col, num) && 
           !UsedInBox(grid, row - row%3 , col - col%3, num)&& 
            grid[row][col]==UNASSIGNED; 
} 
  
/* Primary recursive function for solving Sudoku*/
int SolveSudoku(int grid[9][9]) 
{ 
    int row, col, num;

    num = 1; 
    // If there is no more unassigned locations, Sudoku is solved! 
    if (!FindUnassignedLocation(grid, &row, &col)) 
       return 1; // This is the end. Sudoku is solved 
  
    // Consider digits 1 to 9 
    while (num <= 9) 
    { 
        // If number is safe 
        if (isSafe(grid, row, col, num)) 
        { 
            /* This is a temporary assignment. It can 
            and may be changed through backtracking.*/
            grid[row][col] = num; 
  
            /* This condition is only met if there are no more
                unassigned locations. Sudoku is solved.*/
            if (SolveSudoku(grid)) 
                return 1; 
  
            // Failure, assign a 0 & try again 
            grid[row][col] = UNASSIGNED; 
        } 
        num++;
    } 
    return 0; // This triggers backtracking 
} 
  
/*Prints the Grid*/
void printGrid(int grid[9][9]) 
{
    int row;
    int col;
    char c; 

    row = 0;
    col = 0;
    while (row < 9) 
    { 
       while(col < 9)
       { 
            if (col < 8)
            {
                c = grid[row][col] + 48; /* Need to convert int back to 
                char because we're not allowed to use prinft */
                ft_putchar(c);
                ft_putchar(' ');
            }
            else
            {
                c = grid[row][col] + 48;
                ft_putchar(c);
            }
            col++;
       } 
        ft_putchar('\n');
        col = 0; 
        row++;
    } 
} 

/* Global variable -- New Grid */
int myGrid[9][9];

void ConvertToIntGrid(char **c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < 9)
    {
        while(j < 9)
        {
            if(c[i+1][j] == '.')
                myGrid[i][j] = 0;
            else
                myGrid[i][j] = c[i+1][j] - 48;
        ++j;
        }
    ++i;
    j = 0;
    }
}

int main(int ac, char **av) 
{  
    int i;
    
    i = 1;
    /* Error Catching: Only 10 Parameters Allowed */
    if (ac != 10)
    {
        write(1, "Error\n", 6);
        return 0;
    }
    /* Error Catching: Input has to be 9 characters long */
    while (i < 10)
    {
        if (av[i][9] != '\0')
        {
             write(1, "Error\n", 6);
             return 0;
        }
        i++;
    }
    ConvertToIntGrid(av);
    if (SolveSudoku(myGrid) == 1) 
            printGrid(myGrid);
    else
         write(1, "Error\n", 6); 
    return 0; 
} 
