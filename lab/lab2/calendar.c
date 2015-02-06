/**
 * CS1010 AY2014/5 Semester 2 Lab2 Ex3
 * calendar.c
 * <Type your name here>
 * <Type your discussion group here>
 * <Fill in a description of this program>
 */
 
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

void print_calendar (int year, int month);

main()
{   
   int year, month; 
   
   printf ("Enter a year: ");                             
   scanf ("%d", &year);
   
   printf ("Enter a month: "); 
   scanf ("%d", &month);
   
   print_calendar(year, month);
     
}

void print_calendar (int year, int month) 
{
	//write your code here
	
    printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
	//write code and print your calendar here
	printf("\n");
}
