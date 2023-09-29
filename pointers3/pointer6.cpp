#include <iostream>
using namespace std;

int main() {
    int arr[3] = {11, 12, 13};
    int(*ptr)[3] = &arr;
    cout << ptr << " " << arr << " " << *ptr << " " << *arr;

    return 0;
}