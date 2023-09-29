#include <iostream>
#include <vector>
using namespace std;

int main() {
    //? array manipulation
    // size of vector
    int n;
    cout << "size: ";
    cin >> n;

    // initializing vector of size n
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
    cout << "\n";

    // soln
    // identify the pair
    int manipulator = -1;
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] == v[j]) {
                // manipulating the pairs
                v[i] = v[j] = manipulator;
            }
        }
    }

    // printing the new manipulated vector
    cout << "v: ";
    for (int ele : v) {
        cout << ele << " ";
    }

    // looping through vector to find the unique element
    int uniqueEle;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > 0) {
            cout << "\nunique value: " << v[i];
        }
    }
    return 0;
}