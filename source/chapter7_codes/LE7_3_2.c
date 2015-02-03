/* Program for Lesson  7_3, exercises 2*/ 
  
 void main void()
{
	char a[][12] ={'aaa', 'bbb', 'ccc'};
	char b[2][2];
	strcpy(a[0],a[‘aaa’]);
	strcpy(a[1],’bbb’);
	strcpy(b[0],a[0]);
	a[0][0]=strlen(a);
	strcpy (b[0][1], a[0][1]);
	b[1][0]=a[1][0];
}

