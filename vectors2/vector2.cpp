#include <iostream>
#include <vector>
using namespace std;

int main() {
    //? target sum

    // taking input the size
    int n;
    cout << "size: ";
    cin >> n;

    // initializing vector
    vector<int> v(n);

    // taking input in vector
    for (int i = 0; i < n; i++) {
        cout << "element: ";
        cin >> v[i];
    }

    // displaying the vector
    cout << "v: ";
    for (int ele : v) {
        cout << ele << " ";
    }

    // soln
    // initializing ans as 0 as no pair is found
    int ans = 0;

    // taking inout the target sum
    int targetSum;
    cout << "\ntarget sum: ";
    cin >> targetSum;

    // looping through the vector twice coz we wanna find a triplet ie. 3
    // hence two pointers
    // i starts from 0th index element
    // j starts from element to right of i-th index one, ie. i + 1
    // k starts from element to right of j-th index one, ie. j + 1
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            for (int k = j + 1; k < v.size(); k++) {
                // condition
                if (v[i] + v[j] + v[k] == targetSum) {
                    // increenting ans when a pair is found
                    ans++;
                }
            }
        }
    }

    cout << "no of pairs: " << ans;
}