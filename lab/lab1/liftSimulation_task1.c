#include <stdio.h>

/*add necessary headfiles here*/

//************************  TASK 1 **********************************//
// This function places a > on the 8th position in the array based on cur_pos value 
char ** staticLift(int cur_pos)
{
	
	/*add your code here*/
		char output[6][12] = 
	    {{'-','-','-','-','-','-','-','-','-','-','-','-'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'}};

		
		// replace character based on cur_pos
		//output[cur_pos][12] = '>';
		
		return output;
			
}
//************************  TASK 1 **********************************//
int print_arr(char output[][12]);
//*************************  ENTRY *********************************//
int main()
{
	/*Task 1*/
	int cur_pos;
	scanf("%d",&cur_pos);

	char **array1=staticLift(cur_pos);
	print_arr(array1);

		
	return 0;
}


//print the lift
int print_arr(char output[][12]){
	
	int row = 6, col = 12, i , j;

	for (i = 0; i < row; i ++){
		for (j = 0; j < col; j++){
			putchar(output[i][j]);	
		}
		printf("\n");
	}
	return 0; 	

}




