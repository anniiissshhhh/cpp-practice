#include <iostream>
#include <vector>
using namespace std;

void sortZerosAndOnes(vector<int> &v) {
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr) {
        if (v[left_ptr] == 1 && v[right_ptr] == 0) {
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }

        if (v[left_ptr] == 0) {
            left_ptr++;
        }
        if (v[right_ptr] == 1) {
            right_ptr--;
        }
    }

    return;
}

int main() {
    // size of vector
    int n;
    cout << "size: ";
    cin >> n;

    // initializing vector
    vector<int> v(n);

    // input in vector
    for (int i = 0; i < n; i++) {
        cout << "element: ";
        cin >> v[i];
    }

    // printing the vector
    cout << "v1: ";
    for (int ele : v) {
        cout << ele << " ";
    }

    // function to sort
    sortZerosAndOnes(v);

    // printing the new array
    cout << "\nv2: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
