#include<stdio.h>
#include<math.h>

float speed_of_sound(float temperature);

int main(void){
		float temperature,sound_speed;
		printf("Temperature in degree Fahrenheit: ");
		scanf("%f",&temperature);
		
		sound_speed=speed_of_sound(temperature);
		printf("Speed of sound in air of %.2f degree = %.2f ft/sec\n",temperature,sound_speed);
		
		return 0;	
}


float speed_of_sound(float temperature){
	return 1086 * sqrt((5*temperature+297)/247); 
}
