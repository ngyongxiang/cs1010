/* Program for Lesson  7_4, exercises 2*/ 
  
 void main( void)
{ char name[2][30], number[2][10];
  printf("Please type your first name, a blank, and last name);
  gets(name[0]);
  scanf("    %s     ",name[1]);
  printf("name=%s, %s\n", name[0], name[1]);

  printf("Please type a number, press the return key, and another number);
  scanf("  %s   ", number[0]);
  gets(   number[1]);
  printf("number =%s, %s\n",number[0], number[1]);
}

