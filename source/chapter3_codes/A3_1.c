/* For application A3_1*/ 
 
#include <stdio.h> 
void main (void) 
{ 
    double horizleg, vertleg, area1, area2, area3, area4; 
 
    horizleg  = 5.0;   
    vertleg   = 7.0;  
    area1     = 0.5 * horizleg * vertleg; 
 
    horizleg  += 1.0;  
    vertleg   /= 2.0;  
    area2      = 0.5 * horizleg * vertleg; 
 
    horizleg  += 1.0;  
    vertleg   /= 2.0;  
    area3      = 0.5 * horizleg * vertleg; 
 
    horizleg  += 1.0;  
    vertleg   /= 2.0;  
    area4      = 0.5 * horizleg * vertleg; 
 
    printf ("  \n\ 
      First  triangle area = %6.2f   \n\ 
      Second triangle area = %6.2f   \n\ 
      Third  triangle area = %6.2f   \n\ 
      Fourth triangle area = %6.2f   \n", 
      area1, area2, area3, area4);  
} 


