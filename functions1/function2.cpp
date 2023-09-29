#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "num: ";
    cin >> num;

    float square = pow(num, 2);
    cout << "square of " << num << " is: " << square;
    return 0;
}