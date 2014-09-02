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

int count_candle(int num_candles,int amt_newcandle);

int main(void){
	int num_candles,amt_newcandle; //amt_newcandle = amount needed to make new candle.
	
	printf("Enter number of candles and\n" 
	"numberof residuals to make a new candle: ");
	scanf("%d %d",&num_candles,&amt_newcandle);
	printf("Total candles burnt = ",count_candle(num_candles,amt_newcandle);


}

int count_candle(int num_candles,int amt_newcandle){
	int counter,new_candle; //number of new candles made from residual wax
	new_candles=1;

	for (i=0;i<=num_candles;counter++){
		if (i%amt_newcandle==0){
			num_candles++;
		}
	}

	return counter;
}



