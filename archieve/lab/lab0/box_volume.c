//Author: Xin Kenan
//Discussion Group: T32
//Date:
//Lab Session No:0
//Program Description:
/*
Write a program box_volume.c that reads three positive
integers representing the length,
width and height of a box,
and computes the volume of the box.

You may assume that the volume of the box does not
exceed the maximum value representable in the int data type. 
*/

#include <stdio.h>

int main(void){
	// Var Declarations
	int length,width,height,volume;
	
	//Display info and request user input
	printf("Enter length: ");
	scanf("%d",&length);

	printf("Enter width : ");
	scanf("%d",&width);

	printf("Enter height: ");
	scanf("%d",&height);
	
	//Calculate Volume
	volume=length*width*height;

    //Display result
	printf("Volume = %d\n",volume);
	
	return 0;
	

}

