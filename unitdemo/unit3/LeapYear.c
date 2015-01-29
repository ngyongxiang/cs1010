#include <stdio.h>


int main(void){
	
	

	return 0;
}


// returns 1 if it is a leap year, 0 otherwise. 
int isLeadYear(int year){

	if (((year%4==0)&&(year%100!=0)) || (year%400 == 0))
		return 1;
	return 0
}
