#include <iostream>
#include <vector>
using namespace std;

vector<int> inputInVector(vector<int> V) {
    for (int i = 0; i < V.size(); i++) {
        cout << "  ele: ";
        cin >> V[i];
    }
    return V;
}

void printingVector(vector<int> V) {
    for (int i = 0; i < V.size(); i++) {
        cout << V[i] << " ";
    }
}

int main() {
    int m, n;

    cout << "size of arr1: ";
    cin >> m;

    cout << "size of arr2: ";
    cin >> n;

    vector<int> arr1(m);
    vector<int> arr2(n);
    vector<int> ansArray(m + n);

    cout << "\ninput in arr1:\n";
    arr1 = inputInVector(arr1);

    cout << "input in arr2:\n";
    arr2 = inputInVector(arr2);

    cout << "\narr1: ";
    printingVector(arr1);

    cout << "\narr2: ";
    printingVector(arr2);

    // soln
    cout << "\nansArray: ";
    // k -> put values in ansArray
    // i -> to traverse arr1
    // j -> to traverse arr2
    int k = 0;
    int i = 0;
    int j = 0;
    for (k = 0; k < m + n; k++) {
        ansArray[k] = arr1[i] < arr2[j] ? arr1[i++] : arr2[j++];
    }

    printingVector(ansArray);
    return 0;
}