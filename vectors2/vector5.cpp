#include <limits.h>

#include <iostream>
#include <vector>
using namespace std;

// function prototype
int findLargest(vector<int> v);

int main() {
    //? finding second largest element in given array

    // taking input the size of vector
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

    // printing out the vector
    cout << "v: ";
    for (int ele : v) {
        cout << ele << " ";
    }

    // soln
    int max1Index = findLargest(v);
    int max1 = v[max1Index];

    int max2 = INT_MIN;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] > max2 && v[i] != max1) {
            max2 = v[i];
        }
    }

    // printing max1 and max2
    cout << "\nmax1: " << max1;
    cout << "\nmax2: " << max2;

    return 0;
}

// function declaration
int findLargest(vector<int> v) {
    int largest = INT_MIN;
    int largestIndex;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > largest) {
            largest = v[i];
            largestIndex = i;
        }
    }

    return largestIndex;
}