//Class:CS1010 AY2014/5 Semester 1
//Author: Xin Kenan
//Discussion Group: T32
//Date:
//Lab Session No:2
//Exercise:1
//Program Description:
/*
   The program takes in number of candle and residual was  and calculate
   the total number of candles can be burnt in total.
 */

#include <stdio.h>

int count_candle(int ,int);

int main(void){
	int num_candles,amt_newcandle; //amt_newcandle = amount needed to make new candle.

	printf("Enter number of candles and \n" 
			"number of residuals to make a new candle: ");
	scanf("%d %d",&num_candles,&amt_newcandle);

	printf("Total candles burnt = %d\n", count_candle(num_candles,amt_newcandle));
	return 0;

}

/*
   Pre-condition:
   It is assumed that count_candle takes in num_candles >0 and amt_candle>0
   It is also optional to take note that, amt_candle is ideally < num_candles.
   if amt_candle < num_candles, we can directly conclude that
   number of candles burnt = num_candles without looping.
 */

// count candle returns number of cancles.
int count_candle(int num_candles,int amt_newcandle){
	int counter; //number of new candles made from residual wax

	for (counter=1; counter<=num_candles; counter++){
		if (counter % amt_newcandle == 0){
			num_candles++;
		}
	}

	return num_candles;
}



