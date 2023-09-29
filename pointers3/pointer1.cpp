#include <iostream>
using namespace std;

int main() {
    int arr[2] = {5, 2};
    int *ptrx = &arr[0];
    cout << (*ptrx)++ << endl;
    cout << arr[0] << " " << arr[1];

    return 0;
}
