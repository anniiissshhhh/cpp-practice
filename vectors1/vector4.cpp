#include <iostream>
#include <vector>
using namespace std;

int main() {
    //? count the number of elements strictly greater than x

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

    // taking input the x
    int x;
    cout << "\nx: ";
    cin >> x;

    // soln
    int eleBiggerThanX = 0;
    for (int i = 0; i < v.size(); i++) {
        if (x < v[i]) {
            eleBiggerThanX++;
        }
    }

    cout << "no of elemets bigger than " << x << ": " << eleBiggerThanX;
    return 0;
}