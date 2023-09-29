#include <iostream>
#include <vector>
using namespace std;

int returnIndexOfX(vector<int> vec, int target) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "size: ";
    cin >> size;

    vector<int> vec(size);

    for (int i = 0; i < size; i++) {
        cout << "ele: ";
        cin >> vec[i];
    }

    cout << "\nvec: ";
    for (int ele : vec) cout << ele << " ";

    // return index of array at which x is present
    int x;
    cout << "\nx: ";
    cin >> x;

    int ans = returnIndexOfX(vec, x);
    cout << x << " is at index: " << ans;
    return 0;
}