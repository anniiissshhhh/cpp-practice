#include <iostream>
#include <vector>
using namespace std;

int main() {
    //? (sum of elements at even indices) - (sum of elements are off indices)
    // taking input the size of vecto
    int n;
    cout << "size: ";
    cin >> n;

    // taking input in vector
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cout << "element: ";
        cin >> v[i];
    }

    // printing out the vector
    cout << "v:";
    for (int ele : v) {
        cout << ele << " ";
    }

    // soln
    int sumAtEven = 0;
    int sumAtOdd = 0;
    int difference;

    for (int i = 0; i < v.size(); i++) {
        if (i % 2 == 0) {
            sumAtEven += v[i];
        } else {
            sumAtOdd += v[i];
        }
    }

    if (sumAtEven > sumAtOdd) {
        difference = sumAtEven - sumAtOdd;
    } else {
        difference = sumAtOdd - sumAtEven;
    }

    cout << "\ndifference: " << difference;

    return 0;
}