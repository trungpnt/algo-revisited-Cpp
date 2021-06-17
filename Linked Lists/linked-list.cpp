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

void display(struct Node *p){
    while( p != NULL){
        printf("%d ", p ->data);
        p = p ->next;
    }
}

void RDisplay()

int main()
{
    return 0;
}