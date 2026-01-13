#include <stdio.h>

struct Car {
    char brand[20];
    char model[20];
};

int main() {
    struct Car c = {"Honda", "City"};
    struct Car *p;

    p = &c;

    printf("Brand: %s\n", p->brand);
    printf("Model: %s\n", p->model);

    return 0;
}
