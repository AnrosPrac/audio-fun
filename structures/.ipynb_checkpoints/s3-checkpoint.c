#include <stdio.h>
struct employee{
    int id;
    int salary;
} emp[4];
int main()
{
    printf("-- -- -- -- EMPLOYEE DETAILS INPUT -- -- -- -- \n");
    for(int i =0;i<=4;i++){
          printf("-- -- -- -- Employee %d -- -- -- -- \n",i+1);
        printf("Enter the id of the employee : \n");
        scanf("%d",&emp[i].id);
                printf("Enter the salary of the employee : \n");
        scanf("%d",&emp[i].salary);
    }
    
    printf("-- -- -- -- EMPLOYEE DETAILS OUTPUT -- -- -- -- \n");
    for(int i =0;i<=4;i++){
        printf("-- -- -- -- Employee %d -- -- -- -- \n",i+1);
        printf("Employee id : %d \n",emp[i].id);
        printf("Employee salary : %d \n",emp[i].salary);     
    }
    return 0;
}
