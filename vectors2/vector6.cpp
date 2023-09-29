#include <limits.h>

#include <iostream>
#include <vector>
using namespace std;

// function prototype
int findLargest(vector<int> v);

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
    // taking input the no of steps
    int k;
    cout << "\nsteps: ";
    cin >> k;

    k %= n;

    // creating a new array to store k and (n-k) elements
    vector<int> ans(n);
    int j = 0;

    // adding last k elements in ans array
    for (int i = n - k; i < n; i++) {
        ans[j++] = v[i];
    }

    // adding remaining (n-k) elements in ans array
    for (int i = 0; i <= k; i++) {
        ans[j++] = v[i];
    }

    // printing ans vector
    cout << "ans: ";
    for (int ele : ans) {
        cout << ele << " ";
    }

    return 0;
}
