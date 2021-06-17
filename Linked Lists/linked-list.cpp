#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[0];
        t->next = NULL;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void display_recursion(struct Node *p)
{
    if (p != NULL)
    {
        printf("%d ", p->data);
        display_recursion(p->next);
    }
}

void reverse_display_recursion(struct Node *p)
{
    if (p != NULL)
    {
        reverse_display_recursion(p->next);
        printf("%d ", p->data);
    }
}

int main()
{
    return 0;
}