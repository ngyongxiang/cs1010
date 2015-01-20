#include <stdio.h>
#include <string.h>

struct Consumption
{
		char city[20];
		int year;
		double usage;
};


struct Resource
{
		char material[30];
		double longtitude;
		double latitude;
		double quantity;
		char units[20];
};

void main(void)
{
	struct Resource metal, fuel;
	struct Resource wood = {"oak", 32.5,13.2, 5e+8, "hectares"};
	struct Comsuption water,power;

	metal.longtitude = 57.3;
	metal.latitude = 32.1;
	metal.quantity = 3e+10;
	strcpy(metal.material, "Iron");
	strcpy(metal.units, "cubic metres");

	printf("The metal information is :\n%s\n%4.11f degrees longtitude\n"
			"%4.11f degrees latitude\n%4.0e %s\n\n",
			metal.material, metal.longtitude, metal.latitude, metal.quantity, metal.units);

	printf("Enter water and power: \ncity, year and usage\n");

	scanf("%s%d%1f%s%d%1f", water.city, &power.year, &power.usage);

	printf("\n\nThe water and power are:\n%s\n%d\n%4.01f million litres\n\n"
	"%s\n%d\n%4.01f mega watts\n",
	water.city, water.year, water.usage, power.city, power.year, power.usage);



}
