/**
 * CS1010 AY2014/5 Semester 1 Lab0 Ex1
 * box_volume.c
 * This program calculates the volume of a box.
 * <Type your name here>
 * <Type your discussion group here>
 */

#include <stdio.h>

int main(void) {

	int length, width, height, volume;

	printf("Enter length: ");
	scanf("%d", &length);

	printf("Enter width : ");
	scanf("%d", &width);

	printf("Enter height: ");
	/*
	 * Correct the following three statements,
	 * each containing one or more errors.
	 * One of the statements, if not corrected properly,
	 * will result in a run-time error which creates a file 
	 * called 'core'. You should remove this 'core' file.
	 * Remove this comment after correction.
	 */
	scanf("%d", height);

	volume = length + width + height;

	printf("Answer is %d\n", volume);

	return 0;
}

