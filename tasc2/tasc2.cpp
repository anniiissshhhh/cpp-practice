#include <iostream>
using namespace std;

int main() {
    // problem 5
    int val = 0;
    int N;
    cin >> N;
    for (int i = N; i > 0; i /= 2) {
        for (int j = 0; j < i; j++) {
            val++;
        }
    }
    cout << val;
    return 0;
}