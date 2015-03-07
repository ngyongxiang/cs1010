#include <stdio.h>

#define TRUE 1
#define FALSE 0

void print_calendar(int , char *);
int compare_strings(char *,char *);

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


// same as strcmp but return 1 if two string are equal ,0 otherwise.
// experimenting pointer
int compare_strings(char *str1, char *str2){

}