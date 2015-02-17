// Week4_Weekday.c
// To illustrate nested if-else
#include <stdio.h>

int main(void) {    
	int day, time;

	printf("Enter day and time: ");
	scanf("%d %d", &day, &time);

	if (day <= 5) {
		/* weekday */
		if (time < 8)
			printf("Sleep\n");
		else {
			if (time < 18)
				printf("School\n");
			else
				printf("Do revision\n");
		} 
	}
	else {
		/* weekend */
		if (time < 10)
			printf("Sleep\n");
		else 
			printf("Have fun\n");
	}

	return 0;
}

