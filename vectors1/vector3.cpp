#include <iostream>
#include <vector>
using namespace std;

int main() {
    //? count the number of occurances
    int n;
    cout << "size: ";
    cin >> n;

    vector<int> v(n);

    // taking input in vector
    for (int i = 0; i < n; i++) {
        cout << "element: ";
        cin >> v[i];
    }

    // taking inout the x
    int x;
    cout << "x: ";
    cin >> x;

    // printing out vector
    cout << "v: ";
    for (int ele : v) {
        cout << ele << " ";
    }

    // finding number of occurances
    int noOfOccurances = 0;
    // for (int i = 0; i < v.size(); i++) {
    //     if (v[i] == x) {
    //         noOfOccurances++;
    //     }
    // }

    // using for-each loop here
    for (int ele : v) {
        if (ele == x) {
            noOfOccurances++;
        }
    }

    cout << "\n"
         << x << " occurs " << noOfOccurances << " times.";

    return 0;
}