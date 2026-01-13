#include <stdio.h>
struct Student {
	char name[50];
 	int roll_no;
	float mark ;
};
int main()
{
	struct Student s;
	printf("--------STUDENT DETAIL INPUT-------- : \n");
	printf("Enter the name of the student : \n");
	scanf("%s", s.name);
	printf("Enter the roll number : \n");
	scanf("%d", &s.roll_no); 
	printf("Enter the marks : \n");
	scanf("%f", &s.mark); 
 	printf("--------STUDENT DETAIL OUTPUT-------- : \n");
 	printf("Name: %s \n", s.name);
 	printf("Roll Number: %d \n", s.roll_no);
 	printf("Marks: %f \n", s.mark);
	return 0;
}