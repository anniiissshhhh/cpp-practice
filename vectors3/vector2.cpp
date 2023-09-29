#include <iostream>
#include <vector>
using namespace std;

void sortByParity(vector<int> &v) {
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr) {
        if (v[left_ptr] % 2 == 1 && v[right_ptr] % 2 == 0) {
            swap(v[left_ptr], v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }

        if (v[left_ptr] % 2 == 0) {
            left_ptr++;
        }

        if (v[right_ptr] % 2 == 1) {
            right_ptr--;
        }
    }
}

int main() {
    // size of vector
    int n;
    cout << "size: ";
    cin >> n;

    // initializing the vector
    vector<int> v(n);

    // taking input in vector
    for (int i = 0; i < n; i++) {
        cout << "element: ";
        cin >> v[i];
    }

    // printing the vector
    cout << "v1: ";
    for (int ele : v) {
        cout << ele << " ";
    }

    // soln
    sortByParity(v);

    // printing out the answer vector
    cout << "\nv2: ";
    for (int ele : v) {
        cout << ele << " ";
    }
    return 0;
}