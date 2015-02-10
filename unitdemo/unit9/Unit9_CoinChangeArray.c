// Unit9_CoinChangeArray.c
// This is a version with array.
// Given coins of denominations of 1-, 5-, 10-, 20-,
// 50-cents and $1, and an amount in cents, find the
// fewest number of coins required to make up this amount.
#include <stdio.h>

int minimumCoins(int);

int main(void) {
	int amount;

	printf("Enter amount in cents: ");
	scanf("%d", &amount);
	printf("Number of coins = %d\n", minimumCoins(amount));

	return 0;
}

// To find the minimum number of coins
// to make up that amount amt
// Coin denominations: 1-,5-,10-,20-,50-cents, and $1.
int minimumCoins(int amt) {
	int denoms[] = { 100, 50, 20, 10, 5, 1 };
	int i, coins = 0;

	for (i=0; i<6; i++) {
		coins += amt/denoms[i]; 
		amt %= denoms[i];
	}

	return coins;
}

