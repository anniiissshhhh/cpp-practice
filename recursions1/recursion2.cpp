#include <iostream>
using namespace std;

int fib(int n) {
    // halth condition
    if (n == 0 || n == 1) return n;

    // assumption and self work
    return fib(n - 1) + fib(n - 2);
}

int main() {
    //? fibonacci using recursion: printing nth fib number
    for (int i = 0; i <= 10; i++) {
        cout << fib(i) << ", ";
    }
    return 0;
}