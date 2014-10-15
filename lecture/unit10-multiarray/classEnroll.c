#include <stdio.h>

#define MAX_CLASS 10
#define MAX_STUDENT 30

int find_most_student(int arr[][MAX_STUDENT], int num_class, int num_student);
void find_busy_stu(int arr[][MAX_STUDENT],int num_class,int num_student);
void busiestStudents(int enrol[][MAX_STUDENT], int numClasses, int numStudents);
int classWithMostStudents(int enrol[][MAX_STUDENT], int numClasses, int numStudents);


int main(void){
	int i, num_class,num_students,entries;
	int student,class;	
	//ask how many class and how many students
	printf("Eneter number of class and students: ");
	scanf("%d %d", &num_class,&num_students);
	//ask how many entries
	printf("Enter the number of entries: ");
	scanf("%d" ,&entries);
	//ask which student is in which class
	int enrol[MAX_CLASS][MAX_STUDENT] = { {0} };

	printf("Enter student and class :\n");
	for (i = 0; i < entries; i++){		
		scanf("%d %d", &student , &class);
		enrol[class][student] = 1;	
	}	

	printf("Class %d has the most students\n", find_most_student(enrol,num_class,num_students) );
	find_busy_stu(enrol, num_class, num_students);
	return 0;
}



//name any class with most students

int find_most_student(int arr[][MAX_STUDENT], int num_class, int num_students){
	int  i ,k, sum_students, most_students = 0,most_stu_class = 0;
	for (i = 0 ; i < num_class; i++){
		sum_students =  0;
		//count the number of students , sum(enroll[i][k:1 to num_students]=1);
		for (k = 0 ; k < num_students; k++){
			sum_students += arr[i][k];

		}
		if (sum_students > most_students){
			most_students = sum_students;
			most_stu_class = i;
		}
	}
	return most_stu_class;
}
//standard answer
int classWithMostStudents(int enrol[][MAX_STUDENT], int numClasses, int numStudents) {
	int classSizes[MAX_CLASS];
	int r, c; // row and column indices
	int maxClass, i;

	for (r = 0; r < numClasses; r++) {
		classSizes[r] = 0;
		for (c = 0; c < numStudents; c++) 
			classSizes[r] += enrol[r][c];
	}

	// find the one with most students
	maxClass = 0;  // assume class 0 has the most students first
	for (i = 1; i < numClasses; i++)
		if (classSizes[i] > classSizes[maxClass]) 
			maxClass = i;

	return maxClass;
}

//name all students who are enrolled in all the class
void find_busy_stu(int arr[][MAX_STUDENT],int num_class,int num_student){
	int student[MAX_STUDENT]={0};

	int i, k, j ; //asume that busy student is 0 by default
	//everytime see a student, mark his name and put inside a list ,student 0 = list item 0 , student[i] = class_taken;
	for (i = 0 ; i<num_class; i++){
		for (k = 0 ; k < num_student; k++){
			if (arr[i][k]==1)
				student[k]++;
		}
	}
	//then we look at the student list and see which student take = num_class 
	for (j = 0; j<num_student; j++){
		if (student[j] == num_class){
			printf("%d \n", j);
		}
	}

}
//standard answer
void busiestStudents(int enrol[][MAX_STUDENT], int numClasses, int numStudents) {
	int sum; 
	int r, c;

	printf("Students who take all classes: ");
	for (c = 0; c < numStudents; c++) {
		sum = 0;
		for (r = 0; r < numClasses; r++) 
			sum += enrol[r][c];
		if (sum == numClasses)
			printf("%d ", c);
	}
	printf("\n");
}

