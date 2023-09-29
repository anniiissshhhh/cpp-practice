#include <iostream>
#include <vector>
using namespace std;

int main() {
    // taking input the size of vector
    int n;
    cout << "size: ";
    cin >> n;

    vector<int> v(n);

    // taking input the elements in vector
    for (int i = 0; i < v.size(); i++) {
        cout << "element: ";
        cin >> v[i];
    }

    // printing out the vector
    cout << "v: ";
    for (int ele : v) {
        cout << ele << " ";
    }

    // soln
    bool flag = true;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] <= v[i - 1]) {
            flag = false;
        }
    }

    cout << endl;

    cout << flag;
    return 0;
}