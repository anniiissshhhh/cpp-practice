#include <iostream>
#include <vector>
using namespace std;

int main() {
    // size of vector
    int n;
    cout << "size: ";
    cin >> n;

    // initializing the vector
    vector<int> v(n + 1, 0);

    // taking input in vector
    for (int i = 1; i <= n; i++) {
        cout << "element: ";
        cin >> v[i];
    }

    // printing the vector
    cout << "v1: ";
    for (int ele : v) {
        cout << ele << " ";
    }

    // soln
    // calculate prefix sum array
    for (int i = 1; i <= n; i++) {
        v[i] += v[i - 1];
    }

    // printing prefix sum array
    cout << "\nv2: ";
    for (int ele : v) {
        cout << ele << " ";
    }

    // take inut the queries
    int q;
    cout << "\nqueries: ";
    cin >> q;

    while (q--) {
        int l, r;
        cout << "l: ";
        cin >> l;
        cout << "r: ";
        cin >> r;

        int ans = 0;
        // ans = prefixSum[r] - prefixSum[l-1]
        ans = v[r] - v[l - 1];
        cout << "ans: "
             << ans
             << endl
             << endl;
    }

    return 0;
}