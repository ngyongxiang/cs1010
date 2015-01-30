#include <stdio.h>

/*add necessary headfiles here*/

//************************  TASK 1 **********************************//
char ** staticLift(int cur_pos)
{
	/*add your code here*/
	return  0;
}
//************************  TASK 1 **********************************//
int print_arr(char output[][12]);
//*************************  ENTRY *********************************//
int main()
{
	char output[ ][12] = 
	    {{'-','-','-','-','-','-','-','-','-','-','-','-'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'},
		{'|','-','-','-','-','-','-','[','_','_',']','|'}};

	/*Task 1*/
	int cur_pos;
	//scanf("%d",&cur_pos);

	char **array1=staticLift(cur_pos);
	print_arr(output);
		



	return 0;
}


//print the lift
int print_arr(char output[][12]){
	
	int row = 6, col = 12, i , j;

	for (i = 0; i < row; i ++){
		for (j = 0; j < col; j++){
			printf("%c",output[i][j]);
			
		}
		printf("\n");
	}
	return 0; 	

}




