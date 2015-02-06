/*
 *  freezerV2.c
 *  Unit 3 Exercise 6: Estimate temperature in a freezer
 *  given the elapsed time since power failure.
 *  New formula: T = (4*t^10 / (t^9+2)) - 20
 */
#include <stdio.h>
#include <math.h>

float hours_to_minutes(int, int);
float cal_temp(float);

int main(void) {
	int hours, minutes;
	float temperature,time;  // Temperature in freezer

	// Get the hours and minutes
	printf("Enter hours and minutes since power failure: ");
	scanf("%d %d", &hours, &minutes);
	
	// convert time
	time = hours_to_minutes(hours, minutes);	

	// calculate temperature
	temperature = cal_temp(time);	

	// display result
	printf("Temperature in freezer = %.2f" , temperature);

	return 0;
}

float hours_to_minutes(int hours, int minutes){
	
	float time;
	
	time = hours + minutes / 60.0;


	return time;

}

float cal_temp(float time){
	float result;
	
	result = (4 * pow(time, 10.0)) / ( pow (time, 9.0 )+ 2) - 20; 


	return result;

}



