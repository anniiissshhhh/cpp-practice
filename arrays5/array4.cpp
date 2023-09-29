#include <algorithm>
#include <iostream>
#include <vector>

#include "functions.cpp"
using namespace std;

void absArray(vector<int> &V) {
    for (int i = 0; i < V.size(); i++) {
        V[i] = abs(V[i]);
    }
}

void sortArray(vector<int> &V) {
    for (int i = 0; i < V.size(); i++) {
        for (int j = i + 1; j < V.size(); j++) {
            if (V[i] > V[j]) {
                swap(V[i], V[j]);
            } else {
                j++;
            }
        }
    }
}

void squareSortedArray(vector<int> &V) {
    for (int i = 0; i < V.size(); i++) {
        V[i] = V[i] * V[i];
    }
}

int main() {
    int m;
    cout << "m: ";
    cin >> m;

    vector<int> arr(m);
    arr = inputInVector(arr);

    cout << "arr: ";
    printingVector(arr);

    absArray(arr);
    sortArray(arr);
    squareSortedArray(arr);
    cout << "\nans: ";
    printingVector(arr);

    return 0;
}

// array isnt sorted