/**
 * CS1010 AY2014/5 Semester 2 Lab2 Ex2
 * winners.c
 * Xin Kenan
 * T01
 * A program to take a factor-digit and must-have-digit and 
 * calculate the number of wineners based on the number of participants
 */
 
int main(void)
{
	int factor;

	printf("Enter factor-digit: ");
	printf("Enter must-have-digit: ");
	printf("Enter number of participants: ");
	return 0;
}


// take in factor-digit, must have digit and num_digit and return num of winners
int count_winners(int fact_dig, int must_dig, int num_participant){

	int num_winners;

	return num_winners;
}


// return 1 if a number is a winner , 0 otherwise
// a winner is a number that is a multiple of factor-digit as well as contains the must-have-digit
int is_winner(int num,int fact_dig, int must_dig){
	int is_winner = 0;
	if (num % fact_dig != 0){
		is_winner = 0;
	}else {
		while(num > 0){
			if (num % 10 == must_dig){
				is_winner = 1;
				break;
			}
			num/=10;
		}
	}
	return is_winner;
}

