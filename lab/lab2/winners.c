/**
 * CS1010 AY2014/5 Semester 2 Lab2 Ex2
 * winners.c
 * Xin Kenan
 * T01
 * A program to take a factor-digit and must-have-digit and 
 * calculate the number of wineners based on the number of participants
 */
#include <stdio.h>

int count_winners(int fact_dig, int must_dig, int num_participant);
int is_winner(int num,int fact_dig, int must_dig);

int main(void)
{
	int factor,must_dig,num_participant,num_winners;

	// user in
	printf("Enter factor-digit: ");
	scanf("%d", &factor);
	printf("Enter must-have-digit: ");
	scanf("%d", &must_dig);
	printf("Enter number of participants: ");
	scanf("%d", &num_participant);

	// process info
	num_winners = count_winners ( factor, must_dig, num_participant);

	// display output
	printf("Number of winners: %d\n", num_winners);
	return 0;
}


// determine who is winner and count number of winners
// pre-con : num_participants > 1
int count_winners(int fact_dig, int must_dig, int num_participant){
	
	int num_winners,i;
	for (i = fact_dig; i <= num_participant; i++){
		num_winners+=is_winner(i, fact_dig, must_dig);

	}
	return num_winners;
}



// return 1 if a number is a winner , 0 otherwise
// a winner is a number that is a multiple of factor-digit as well as contains the must-have-digit
// pre-con : num > 1
int is_winner(int num,int fact_dig, int must_dig){
	int is_winner = 0;
	
	// if fact_dig = 0 || must_dig==0 return 0 to avoid arithmethic error
	if (fact_dig==0 || must_dig==0 || (num % fact_dig)!= 0){
		is_winner = 0;
	}else {
		while(num > 0){ 
			if (num % 10 == must_dig){
				is_winner = 1;
				break; // question: break this break, break out from if statement, or as as the while loop as intended?
			}
			num/=10;
		}
	}
	return is_winner;
}

