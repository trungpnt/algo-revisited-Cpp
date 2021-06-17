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

void stattic_var_recursion(int n) {
    
}



int main()
{

    std::cout << "Hello World!\n";
}


