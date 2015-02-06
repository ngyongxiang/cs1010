/*
 *  freezer.c
 *  Unit 3 Exercise 5: Estimate temperature in a freezer
 *  given the elapsed time since power failure.
 *  Formula: T = (4*t^2 / (t+2)) - 20
 */
#include <stdio.h>
#include <math.h>

float cal_temp(float);
float hours_to_mins(int, int);

int main(void) {
	int hours, minutes;
	float temperature,time;  // Temperature in freezer

	// Get the hours and minutes
	printf("Enter hours and minutes since power failure: ");
	scanf("%d %d", &hours, &minutes);

	// convert time
	time = hours_to_mins(hours, minutes);

	// calculate temperature
	temperature = cal_temp(time);

	// print result 
	printf("Temperature in freeze = %.2f" , temperature);
	return 0;
}

float cal_temp(float time){
	float result;

	result  = (4 * pow(time, 2.0))/ (time + 2) - 20; // pow(double x , double y);
	
	return result;	

}

float hours_to_mins(int hours,int minutes){
	float time;
	
	time = hours + (minutes / 60.0 );


	return time;

}

