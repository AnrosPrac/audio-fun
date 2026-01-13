#include <stdio.h>

typedef struct {
       int monday : 1;
       int Tuesday : 1; 
       int wednesday : 1;
       int Thursday : 1; 
       int Friday : 1;
} AttendanceRecord ;

void print_attendance(AttendanceRecord record){
    printf("Monday : %s\n ",record.monday ? "Present": " Absent");
     printf("Tuesday : %s\n ",record.Tuesday ? "Present": " Absent");
      printf("Wednesday : %s\n ",record.wednesday ? "Present": " Absent");
       printf("Thursday : %s\n ",record.Thursday ? "Present": " Absent");
        printf("Friday : %s\n ",record.Friday ? "Present": " Absent");
}
int main()
{
    AttendanceRecord student1;
    student1.monday = 1;
    student1.Tuesday = 1;
    student1.wednesday = 1;
    student1.Thursday = 1;
    student1.Friday = 1;
    print_attendance(student1);
   printf("\nSize of AttendanceRecord (for 5 sessions): %zu bytes\n", sizeof(student1));

    return 0;
}
