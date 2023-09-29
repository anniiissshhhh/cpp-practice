#include <iostream>
using namespace std;

void changeValue(int &z) {
    z = 100;
}

int main() {
    int a = 10;
    changeValue(a);
    cout << a << endl;

    return 0;
}