#include <iostream>
using namespace std;

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int i = 6, j = 4;
    swap(i, j);
    cout << i << " " << j << endl;

    int x = 9;
    int &y = x;
    cout << x << " " << y << endl;
    y = 88;
    cout << x << " " << y << endl;

    return 0;
}