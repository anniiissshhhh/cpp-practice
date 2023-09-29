#include <iostream>
using namespace std;

int add(int a = 0, int b = 0, int c = 0) {
    return a + b + c;
}

int main() {
    int sum = add(123, 123);
    cout << sum;
    return 0;
}