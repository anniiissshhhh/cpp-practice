#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    //? rotate the given array by k steps
    // taking input the size of vector
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

    // printing out the vector
    cout << "v: ";
    for (int ele : v) {
        cout << ele << " ";
    }

    // soln
    int k;
    cout << "\nsteps: ";
    cin >> k;

    // after multiple of size of vector, vector becomes same so remainder steps
    k %= v.size();

    // reversing the whole vector
    reverse(v.begin(), v.end());
    // 5, 4, 3, 2, 1

    // reversing (n-k) elements
    reverse(v.begin(), v.begin() + k);

    // reversing k elements
    reverse(v.begin() + k, v.end());

    // printing reversed vector
    cout << "v: ";
    for (int ele : v) {
        cout << ele << " ";
    }
    return 0;
}