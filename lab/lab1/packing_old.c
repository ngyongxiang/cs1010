//Class:CS1010 AY2014/5 Semester 1 Lab1 Ex3
//Author: Xin Kenan
//Discussion Group: T32
//Date:
//Lab Session No:1
//Exercise:3
//Program Description:
/*
This program computes the maximum number of slabs that can be 
packed into a rectangular tray given dimensions of tray and slabs.
Slabs can be arranged either horizontally or vertically in rectangular tray.
*/


#include<stdio.h>
#include<math.h>

// Function prototypes
int compute_max_slabs(int tray_len,int tray_width,int slab_len,int slab_width);
int horizontal_fit(int tray_len,int tray_width,int slab_len,int slab_width);
int vertical_fit(int tray_len,int tray_width,int slab_len,int slab_width);

int main(void){
	//Declare variables
	int tray_len,tray_width,slab_len,slab_width;

	//Get user input for tray dimension 
	printf("Enter dimension of tray: ");
	scanf("%d %d",&tray_len,&tray_width);

	//Get user input for slab dimension
	printf("Enter dimension of slab: ");
	scanf("%d %d",&slab_len,&slab_width);

	//Display Result
	printf("Maximum number of slabs = %d\n",compute_max_slabs(tray_len,tray_width,slab_len,slab_width));
	return 0;
}

//Compare whether more slabs can be fitted into tray horizontally or vertically
int compute_max_slabs(int tray_len,int tray_width,int slab_len,int slab_width){
	int h_fit=horizontal_fit(tray_len,tray_width,slab_len,slab_width);
	int v_fit=vertical_fit(tray_len,tray_width,slab_len,slab_width);

	if (h_fit>v_fit)
		return h_fit;
	else
		return v_fit;
}

/* 
Calculates the maximum no. of slabs that can be packed,
if packed horizontally.
*/
int horizontal_fit(int tray_len,int tray_width,int slab_len,int slab_width){
	//Calculate how many rows slabs can be packed.
	int row=tray_len/slab_width;
	//Calculate how many columns slabs can be packed. 
	int col=tray_width/slab_len;

	return row*col;
}


/*Calculates the maximum no. of slabs that can be packed,
if packed vertically
*/
int vertical_fit(int tray_len,int tray_width,int slab_len,int slab_width){
	//Calculate how many rows slabs can be packed.
	int row=tray_width/slab_width;
	//Calculate how many columns slabs can be packed. 
	int col=tray_len/slab_len;
	
	return row*col;
}





