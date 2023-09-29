#include <iostream>
#include <vector>
using namespace std;

bool checkPrefixSuffixSum(vector<int> &v) {
    int totalSum = 0;
    // finding totalSum
    for (int i = 0; i < v.size(); i++) {
        totalSum += v[i];
    }

    int prefixSum = 0;
    for (int i = 0; i < v.size(); i++) {
        // finding prefixSum and suffixSum at index "i"
        prefixSum += v[i];
        int suffixSum = totalSum - prefixSum;

        // comparing prefixSum and suffixSum
        if (suffixSum == prefixSum) {
            return true;
        }
    }
    return false;
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
    bool ans = checkPrefixSuffixSum(v);

    // answer
    cout << "\nanswer: "
         << ans;

    return 0;
}