/**
 * CS1010 AY2014/5 Semester 2 Lab2 Ex1
 * candles.c
 * A program to calculate number of candles burnt
 * based on the number of candles and number of residue to make
 * new candle
 * Xin Kenan
 * T01 
 */

#include <stdio.h>

int count_candles(int, int);

int main(void) {
	int num_candles, residual_req;	
	printf("Enter number of candles and \n");
	printf("number of residuals to make a new candle: ");
	scanf("%d %d", &num_candles, &residual_req	);

	
	printf("Total candles burnt = %d\n", count_candles(num_candles, residual_req));
	
	return 0;
}


//count the number of candles can be burnt 
//pre-con : amt_residual > 1 
int count_candles(int num_candles, int amt_residual){
	int candles_burnt = 0 ,i;
		
	// with each candle burnt, candles burn ++, i--;
	for (i = num_candles; i > 0 ; i--){
		
		candles_burnt ++;
		if ( (candles_burnt >= amt_residual) && (candles_burnt % amt_residual == 0 )){
			
			candles_burnt ++;	
		}		
	
	}

	return candles_burnt;
}


