#include <iostream>
#include <vector>

#include "functions.cpp"
using namespace std;

int main() {
    int m;
    cout << "m: ";
    cin >> m;

    vector<int> vec(m);
    vector<int> result(m);

    for (int i = 0; i < m; i++) {
        cout << "  ele: ";
        cin >> vec[i];
    }

    cout << "vec: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    // i and j are two pointers
    // i -> left pointer
    // j -> right pointer
    // k is to traverse the ans array and put elements in it from last index to first as greater element first

    int i = 0;
    int j = m - 1;
    int k = m - 1;

    // array is sorted
    while (i <= j && k >= 0) {
        if (abs(vec[i]) > abs(vec[j])) {
            result[k] = vec[i] * vec[i];
            i++;
            k--;
        } else {
            result[k] = vec[j] * vec[j];
            j--;
            k--;
        }
    }

    cout << "\nresult: ";
    printingVector(result);

    return 0;
}