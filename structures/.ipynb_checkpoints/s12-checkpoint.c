#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int age;
};

void search(struct Student *s, int r) {
    int i;
    for(i = 0; i < 3; i++) {
        if(s[i].roll == r) {
            printf("\nStudent Found\n");
            printf("Roll: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Age: %d\n", s[i].age);
            return;
        }
    }
    printf("Student Not Found\n");
}

int main() {
    struct Student s[3];
    int i, r;

    for(i = 0; i < 3; i++) {
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
    }

    printf("\nEnter roll number to search: ");
    scanf("%d", &r);

    search(s, r);

    return 0;
}
