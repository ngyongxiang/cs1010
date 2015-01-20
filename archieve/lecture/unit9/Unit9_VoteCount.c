#include <stdio.h>

int main(void){

	int i, vote, tom = 0 ,dick= 0 , harry = 0;
	
	printf("Enter your vote : \n");

	for (i = 0; i < 1000; i++ ){
		
		scanf( "%d" , &vote);

		switch (vote){
			case 1 :	tom++  ; 	break;
			case 2 : 	dick++ ;	break;
			case 3 : 	harry++;	break;

		}


	}
	printf("Tom: %d; Dick: %d ; Harry : %d\n", tom , dick , harry);
	return 0;
}
