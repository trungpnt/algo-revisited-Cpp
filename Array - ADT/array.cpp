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

int linear_search(struct Array *a, int key){
    for (int i = 0; i < a ->length; i++){
        if ( key == a->A[i]){
            swap(&a ->A[i], &a->A[i+1]);
            return i;
        }
    }
}

struct Array * merge( struct Array *a1, struct Array *a2){
    int i,j,k;
    i = j= k = 0;
    struct Array *a3 = (struct Array*) malloc(sizeof(struct Array));
    while( i < a1 ->length && j < a2 ->length ){
        if( a1 -> A[i] < a2 ->A[j]){
            a3 ->A[k++] = a1 -> A[i++];
        }
        else{
            a3 -> A[k++] = a2 ->A[j++];
        }
    }
    //remaining
    for (; i < a1 ->length; i++){
        a3 -> A[k++] = a1 ->A[i];
    }
    for(; j < a2 ->length; j++){
        a3 -> A[k++] = a2 ->A[j];
    }
    a3 ->length = a1 ->length + a2 ->length;
    return a3;
}

/****SET OPERATIONS ON ARRAYS****/
struct Array * Union (struct Array *a1, struct Array *a2);
struct Array * Intersection (struct Array *a1, struct Array *a2);
struct Array * Difference (struct Array *a1, struct Array *a2);


int main(){


    return 0;
}