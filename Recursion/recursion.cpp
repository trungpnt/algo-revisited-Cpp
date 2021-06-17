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




int main()
{

    std::cout << "Hello World!\n";
}


