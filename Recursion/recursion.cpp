#include <iostream>
using namespace std;

void head_recursion(int n) {
    if (n > 0) {
        head_recursion(n - 1);
        cout << n << " ";
    }
}


void tail_recursion(int n) {
    if (n > 0) {
        cout << n << " ";
        head_recursion(n - 1);
    }
}

int static_var_recursion(int n) {
    static int x = 0;
    if(n>0){
        x++;
        return static_var_recursion(n-1) + x;
    }
    return 0;
}

//Global variable
int x = 0;

int global_var_recursion(int n){
    if( n > 0){
        x++;
        return global_var_recursion(n-1) + x;
    }
    return 0;
}

//TREE RECURSION
void tree_recursion(int n){
    if(n>0){
        cout<<n<<" ";
        tree_recursion(n-1);
        tree_recursion(n-1); 
    }
}

//INDIRECT RECURSION
void recursion_B(int n);
void recursion_A(int n){
    if ( n > 0) {
        cout << n << " ";
        recursion_B(n-1);
    }
}

void recursion_B(int n){
    if ( n > 1) {
        cout << n << " ";
        recursion_A(n/2);
    }
}

//NESTED RECURSION
int nested_recursion(int n){
    if(n>100){
        return n - 10;
    }
    else{
        return nested_recursion(nested_recursion(n+11));
    }
}



int main()
{

    std::cout << "Hello World!\n";
}


