// speedOfSound.c
// Read a temperature and compute the speed of sound in air.
// You must write a function speed_of_sound().
#include <stdio.h>
#include <math.h>

float speed_of_sound(float);

int main(void) {
    float degree, speed;


    printf("Temperature in degree Fahrenheit: ");
    scanf("%f", &degree);

	// calculate result
	speed = speed_of_sound(degree);	


	// display result
	
	printf("Speed of sound in air of %.2f degree = %.2f ft/sec\n", degree, speed);	
    return 0;
}

float speed_of_sound(float temp){

	float result;
	
	result  = 1086 * sqrt( (5.0 * temp + 297) / 247.0 ) ;
	return result;

}

