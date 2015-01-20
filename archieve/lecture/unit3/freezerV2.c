#include <stdio.h>
#include <math.h>

int main(void){
	int hours,mins; // Define integer var hours and mins for user input.
	float time,temperature;

	//Prompt for user input
	printf("Enter hours and minutes since power failure: ");
	scanf("%d %d",&hours,&mins);

	//Converting hours and mins into real number
	time=hours+(mins/60.0);

	//now we calculate the temp based on formula given
	temperature	= 4*pow(time,10)/(pow(time,9)+2)-20;

	//Display results
	printf("Temperature in freezer = %.2f\n",temperature);

	return 0;

}
