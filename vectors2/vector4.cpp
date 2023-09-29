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
    // finding the max
    cout << "\n";

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    // looping through the array to find max1
    int max1Index = findLargest(v);
    max1 = v[max1Index];

    // finding duplicates of max1
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == max1) {
            v[i] = 0;
        }
    }

    // manipulating max1
    v[max1Index] = 0;

    // printing new manipulated vector
    cout << "v: ";
    for (int ele : v) {
        cout << ele << " ";
    }

    // looping through the array to find max2
    int max2Index = findLargest(v);
    max2 = v[max2Index];

    // printing final answers
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