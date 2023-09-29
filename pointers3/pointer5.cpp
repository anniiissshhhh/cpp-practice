#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr + 2;
    cout << ptr << ": " << *ptr << endl;
    *ptr++;
    cout << ptr << ": " << *ptr << endl;
    *ptr--;
    cout << ptr << ": " << *ptr << endl;
    *ptr--;
    cout << ptr << ": " << *ptr << endl;

    return 0;
}