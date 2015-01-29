#include <stdio.h>


/*add necessary headfiles here*/

//************************  TASK 1 **********************************//
char ** staticLift(int cur_pos)
{
	/*add your code here*/
}
//************************  TASK 1 **********************************//


//void print_arr(char *);
//*************************  ENTRY *********************************//
int main()
{
	char output[6][12] = 
	    {{'-','-','-','-','-','-','-','-','-','-','-','-'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'}};

	/*Task 1*/
	int cur_pos;
	scanf("%d",&cur_pos);

	char **array1=staticLift(cur_pos);
	
	/*add your code or function here to print the lift*/

	//print_arr(*output);
	

	return 0;
}


//print the lift
void print_arr(char *test){
	
	int row = 6, col = 12, i , j;

	for (i = 0; i < row; i ++){
		for (j = 0; i < col; j++){
			printf("%c\n",&test[i][j]);
			
		}
		printf("\n");
	}

}

//*************************  ENTRY *********************************//



