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

int main(){
    return 0;
}