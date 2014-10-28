#include <stdio.h>
#include <string.h>

#define SIZE 6     // size (number of rows and columns) of maze
#define WALL 0
#define CELL 1
#define MAX_PATHLEN 10

void readMaze(int [][SIZE], int);
int isValid(int [][SIZE], char []);

int main(void) {
	int maze[SIZE][SIZE];
	char path[MAX_PATHLEN+1];

	readMaze(maze, SIZE); 

	printf("Enter path: ");
	scanf("%s", path);

	if (isValid(maze, path))
		printf("Path is valid.\n");
	else
		printf("Path is not valid.\n");

	return 0;
}

// Create the maze
void readMaze(int maze[][SIZE], int size) {
	int	r, c;

	printf("Enter maze:\n");
	for (r=0; r<size; r++)
		for (c=0; c<size; c++)
			scanf("%d", &maze[r][c]);
}

// Determine whether input path is valid in input maze
int isValid(int maze[][SIZE], char path[]) {
	int pathlen,i,is_valid,check;
	int maze_row = 0, maze_col = 0; 

	pathlen = strlen(path);
	
	for (i = 0; i < pathlen; i++){
		//loop through path array
			// ESWN
				// E = move right maze[row][col + 1]
				// S = move down  maze[row+1][col];
				// W = move left maze[row][col-1]; 
				// N = move up maze[row-1][col]; 
		//if after the move row < 0 || col > SIZE then abort
	
		switch(path[i]){

			case 'E':				
				maze_col+=1;
			 	break;
			case 'W':
				maze_col-=1;
				break;
			case 'S':
				maze_row+=1;
				break;
			case 'N':
				maze_row-=1;
				break;
		}
		
		if (((maze_row < 0) || (maze_row > (SIZE-1)))
			|| ((maze_col < 0) ||( maze_col > (SIZE-1)))){
				return 0;
			}else if (maze[maze_row][maze_col] == WALL){
				return 0;
			}

	}
	
	
	return 1; // this is a stub
}


