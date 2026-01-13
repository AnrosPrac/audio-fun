#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[50];
    char author[50];
    int pages;
};

int main() {
    struct Book *b;

    b = (struct Book*)malloc(sizeof(struct Book));
    if(b == NULL) {
        printf("Memory not allocated\n");
        return 0;
    }

    printf("Enter title: ");
    scanf("%49s", b->title);

    printf("Enter author: ");
    scanf("%49s", b->author);

    printf("Enter pages: ");
    scanf("%d", &b->pages);

    printf("\nBook Details\n");
    printf("Title: %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Pages: %d\n", b->pages);

    free(b);

    return 0;
}
