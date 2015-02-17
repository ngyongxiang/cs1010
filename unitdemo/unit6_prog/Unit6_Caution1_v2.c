// Unit6_Caution1_v2.c
#include <stdio.h>

int main(void) {    
	double a_bit; 
	int inc;
	double f = 0.0;
	double match_num = 1.00;
	int cnt = 0;

	printf("What increment do you want? >");
	scanf("%d", &inc);
	a_bit = 1.0 / (double) inc;

	while (!(f == match_num) && (cnt <= 100)) {
	// while (!((* (int*) &f) == (* (int*) &match_num)) && (cnt <= 500)) {
		printf("%lf\n", f);
		f += a_bit;
		cnt++;
	}

	return 0;
}

