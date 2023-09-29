#include <iostream>
#include <vector>
using namespace std;

int main() {
    // taking input the size
    int n;
    cout << "size: ";
    cin >> n;

    // creating vector
    vector<int> v(n);

    // taking input in vector
    for (int i = 0; i < n; i++) {
        cout << "element: ";
        cin >> v[i];
    }

    // printing out the vector;
    cout << "v: ";
    for (int ele : v) {
        cout << ele << " ";
    }

    // taking input the target sum
    int targetSum;
    cout << "\ntarget sum: ";
    cin >> targetSum;

    // soln
    int noOfPairs = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] + v[j] == targetSum) {
                noOfPairs++;
            }
        }
    }

    cout << "no of pairs: " << noOfPairs;
    return 0;
}