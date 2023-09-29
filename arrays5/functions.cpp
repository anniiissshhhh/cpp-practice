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
