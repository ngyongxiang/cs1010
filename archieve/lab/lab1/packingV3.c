//Class:CS1010 AY2014/5 Semester 1
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
int compute_max_slabs(int tray_len,int tray_width,int tray_height,int slab_len,int slab_width,int slab_height);

int main(void){
	// Declare variables
	int tray_len,tray_width,tray_height,slab_len,slab_width,slab_height,max_slabs;
    
	// Get user input for tray dimension
	printf("Enter dimension of tray: ");
	scanf("%d %d %d",&tray_len,&tray_width,&tray_height);
    
	// Get user input for slab dimension
	printf("Enter dimension of slab: ");
	scanf("%d %d %d",&slab_len,&slab_width,&slab_height);
    
    //Calculate result
    max_slabs=compute_max_slabs(tray_len,tray_width,tray_height,slab_len,slab_width,slab_height);
    
	// Display Result
	printf("Maximum number of slabs = %d\n",max_slabs);
    
	return 0;
}

// Compare whether more slabs can be fitted into tray horizontally or vertically
int compute_max_slabs(int tray_len,int tray_width,int tray_height,int slab_len,int slab_width,int slab_height){
	// Declare variables
    int h_fit,v_fit,row,col;
    
    // First we calculate max no. of slabs can be fitted horizontally.
    
    // Calculate how many rows slabs can be packed.
	row=tray_len/slab_width;
	// Calculate how many columns slabs can be packed.
	col=tray_width/slab_len;
    
    h_fit=row*col;
    // Next we calculate max no. of slabs can be fitted vertically.
    
	row=tray_width/slab_width;
	col=tray_len/slab_len;
    
    v_fit=row*col;
    
    // Lastly we compare which arrangement, horizontal or vertical, can we pack more slabs.
	if (h_fit>v_fit)
		return h_fit;
	else
		return v_fit;
    
}





