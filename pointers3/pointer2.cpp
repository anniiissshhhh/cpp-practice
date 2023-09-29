#include <iostream>
using namespace std;

int main() {
    int arr[2] = {2, 4};
    int* ptrx = &arr[0];
    cout << *ptrx++ << endl;
    cout << arr[0] << " " << arr[1] << endl;
    cout << *ptrx;
    return 0;
}