
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // taking inout size of vector
    int n;
    cout << "size: ";
    cin >> n;

    // initializing the vector
    vector<int> v(n);

    // taking input in vector v
    for (int i = 0; i < n; i++) {
        cout << "element: ";
        cin >> v[i];
    }

    // displaying the vector
    cout << "v: ";
    for (int ele : v) {
        cout << ele << " ";
    }

    // soln
    // preprocessing
    const int N = 1e5 + 10;
    vector<int> freq(N, 0);

    // adding 1s to the freq vector
    // on the places where v[i] == i of freq
    for (int i = 0; i < n; i++) {
        freq[v[i]]++;
    }

    // taking input the queries
    int qSize;
    cout << "\nqueries: ";
    cin >> qSize;

    // 0 is false
    while (qSize--) {
        int qEle;
        cout << "query: ";
        cin >> qEle;
        cout << qEle << " occurs " << freq[qEle] << " times\n";
    }
    return 0;
}