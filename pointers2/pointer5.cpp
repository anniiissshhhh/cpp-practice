#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 19};
    int* ptra = &arr[0];
    cout << ptra++ << ": " << *ptra << endl;
    cout << ptra << ": " << *ptra << endl;

    cout << "arr: " << arr[0] << " " << arr[1] << endl;
    return 0;
}