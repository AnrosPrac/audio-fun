#include <stdio.h>

enum weekday{
    Mon =1,
    TUE,
    WED ,
    THUR,
    FRI = 4
};
int main()
{
   enum weekday assignment_day; 
    assignment_day = FRI; 
    printf("--- Weekday Enum ---\n"); 
    printf("The numerical value of FRI is: %d\n", assignment_day);
    return 0;
}
