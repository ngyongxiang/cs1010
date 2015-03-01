#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void)
{   
    int year;
    char print_method[20];
                      
    scanf ("%d%s", &year,print_method);

    print_calendar(year,print_method);
    
    return 0;
}

void print_calendar (int year,char *print_method) 
{
	//print the calendar here;
}
