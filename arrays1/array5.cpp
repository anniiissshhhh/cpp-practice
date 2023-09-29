#include <iostream>
using namespace std;

int main() {
    int array[] = {3, 7, 18, 11, 9};

    int key;
    cout << "element to check: ";
    cin >> key;

    int ans = -1;

    for (int i = 0; i < 5; i++) {
        if (key == array[i]) {
            ans = i;
            break;
        }
    }

    cout << ans;
    return 0;
}