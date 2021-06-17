#include <iostream>
#include <stdio.h>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void display(struct Array a){
    int i;
    cout<< "Elements are";
    for (i = 0; i < a.length; i++){
        cout << a.A[i];
    }
}

void append(struct Array *a, int x){
    if (a ->length < a->size){
        a -> A[a->length++] = x;
    }
}

void insert(struct Array *a, int index, int x){
    int i;
    if ( index >= 0 && index <= a ->length){
        for(i = a->length; i > index; i--){
            a -> A[i] = a -> A[i-1];
        }
        a -> A[index] = x;
        a -> length++;
    }
}

int delete(struct Array *a, int index){
    int x = 0;
    int i;
    if ( index >= 0 && index < a->length){
        x = a->A[index];
        for(i = index; i < a->length - 1; i++){
            a ->A[i] = a->A[i+1];
        }
    }
    return 0;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    
    return 0;
}