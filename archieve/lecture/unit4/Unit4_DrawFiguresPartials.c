// Unit4_DrawFiguresPartial.c
#include <stdio.h>

void draw_rocket_ship();
void draw_male_stick_figure();
void draw_circle();
void draw_rectangle();

int main(void) {
	draw_rocket_ship();
	printf("\n\n");

	draw_male_stick_figure();
	printf("\n\n");

	return 0;
}

void draw_rocket_ship() {
}

void draw_male_stick_figure() {
}

void draw_circle() {
	printf("   **   \n");
	printf(" *    * \n");
	printf(" *    * \n");
	printf("   **   \n");
}

void draw_rectangle() {
	printf(" ****** \n");
	printf(" *    * \n");
	printf(" *    * \n");
	printf(" *    * \n");
	printf(" ****** \n");
}

