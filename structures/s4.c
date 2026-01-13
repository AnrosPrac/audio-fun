#include <stdio.h>
struct Date{
    int day;
    int month;
    int year;
};

typedef struct Date DateType; // CORRECT in C

int main()
{
   DateType today;
   printf("-- -- -- -- DATE INPUT -- -- -- -- \n");
   printf("Enter today's Date : \n");
   scanf("%d",&today.day);
    printf("Enter today's month : \n");
   scanf("%d",&today.month);
    printf("Enter today's year : \n");
   scanf("%d",&today.year);
    printf("-- -- -- -- DATE OUTPUT -- -- -- -- \n");
    printf("%d - %d - %d",today.day,today.month,today.year);
    return 0;
}
