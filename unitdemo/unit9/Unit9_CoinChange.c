// Unit9_CoinChange.c
// This is a version without array.
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
// Precond: amt >= 0
int minimumCoins(int amt) {
	int coins = 0;

	coins += amt/100; 
	amt %= 100;
	coins += amt/50; 
	amt %= 50;
	coins += amt/20; 
	amt %= 20;
	coins += amt/10; 
	amt %= 10;
	coins += amt/5; 
	amt %= 5;
	coins += amt/1;  // retained for regularity
	amt %= 1;        // retained for regularity

	return coins;
}

