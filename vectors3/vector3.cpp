#include <math.h>

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void absoluteVector(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        v[i] = abs(v[i]);
    }
}

void squaringEle(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        v[i] = ceil(pow(v[i], 2));
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
    absoluteVector(v);
    sort(v.begin(), v.end());
    squaringEle(v);

    // printing out the answer vector
    cout << "\nv2: ";
    for (int ele : v) {
        cout << ele << " ";
    }
    return 0;
}