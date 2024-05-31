#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct Node Node;
struct Node {
    Data data;
    Node * next;
};

void print(Node * list);
void push(Node ** plist, Data d);

void print(Node * list) {
    for (Node * p = list; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");
}

void push(Node ** plist, Data d) {
    Node * p = malloc(sizeof(Node));
    p->data = d;
    p->next = *plist;
    *plist = p;
}

int main() {
    Node * list = NULL;
    Node a = {3}, b = {17}, c = {21}, t = {10};
    list = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    print(list);
    push(&list, 10);

    Node * p = malloc(sizeof(Node));
    p->data = 10;
    p->next = list;
    list = p;

    print(list);
    
    return 0;
}




