#include<stdio.h>
typedef struct student {
	char name[50];
	int scores[50];
	float course_avg;
	char grade;
}Student;

typedef struct gradebook {
	char course_name[40];
	int k; //number of scores
	int m; //number of students
	float weights[50];
	Student s[100];
}Gradebook;

void input_one_student(Student *a, int k) {
	scanf("%s",a->name);
	for(int i=0;i<k;i++)
		scanf("%d", &a->scores[i]);
}

void input_one_gradebook(Gradebook *a) {
	scanf("%s", a->course_name);
	scanf("%d%d", &a->m, &a->k);
	for(int i=0;i<a->k;i++)
		scanf("%f", &a->weights[i]);
	for(int i=0;i<a->m;i++)
		input_one_student(&a->s[i], a->k);
}

float get_sum_of_weights(float weights[], int k) {
	float sum = 0;
	for(int i=0;i<k;i++)
		sum += weights[i];
	return sum;
}

char get_grade(float avg) {
	char grade;
if(avg >= 0 && avg < 60)
		grade = 'F';
	else if(avg >= 60 && avg < 70)
		grade = 'D';
	else if(avg >= 70 && avg < 80)
		grade = 'C';
	else if(avg >= 80 && avg < 90)
		grade = 'B';
	else if(avg >= 90 && avg <= 100)
		grade = 'A';
	return grade;
}

void compute_one_student(Student *a, float weights[], int k) {
	float avg = 0, sum_of_weights = get_sum_of_weights(weights, k);
	for(int i=0;i<k;i++)
		avg += a->scores[i] * weights[i];
	a->course_avg = avg / sum_of_weights;
	a->grade = get_grade(a->course_avg);
}

void compute_one_gradebook(Gradebook *a) {
	for(int i=0;i<a->m;i++)
		compute_one_student(&a->s[i], a->weights, a->k);
}

void display_one_student(Student a) {
	printf("%s\t%.2f %c\n", a.name, a.course_avg, a.grade);
}

void display_one_gradebook(Gradebook a) {
	printf("\n%s\n", a.course_name);
	for(int i=0;i<a.m;i++)
		display_one_student(a.s[i]);
	printf("\n");
}

void getn(int *n) {
	scanf("%d", n);
}

int main() {
	Gradebook a[20];
	int n;
	getn(&n);
	for(int i=0;i<n;i++)
		input_one_gradebook(&a[i]);
	for(int i=0;i<n;i++)
		compute_one_gradebook(&a[i]);
	for(int i=0;i<n;i++)
		display_one_gradebook(a[i]);
	return 0;
}
