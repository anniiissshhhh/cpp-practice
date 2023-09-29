#include <iostream>
#include <vector>
using namespace std;

int main() {
    // find the last occurance

    vector<int> v(7);
    for (int i = 0; i < v.size(); i++) {
        cout << "element: ";
        cin >> v[i];
    }

    cout << "v: ";
    for (int ele : v) {
        cout << ele << " ";
    }

    int x;
    cout << "\nx: ";
    cin >> x;

    int occurance = -1;
    //? one solution - traversing array from start
    // for (int i = 0; i < v.size(); i++) {
    //     if (v[i] == x) {
    //         occurance = i;
    //     }
    // }

    //? second solution - traversing array from last/end
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] == x) {
            occurance = i;
            break;
        }
    }

    cout << "occurance: " << occurance;
    return 0;
}