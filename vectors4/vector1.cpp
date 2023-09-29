#include <iostream>
#include <vector>
using namespace std;

void prefixSum(vector<int> &v) {
    for (int i = 1; i < v.size(); i++) {
        v[i] += v[i - 1];
    }

    return;
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
    prefixSum(v);

    // printing out the answer vector
    cout << "\nv2: ";
    for (int ele : v) {
        cout << ele << " ";
    }
    return 0;
}