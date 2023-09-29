#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int N;
    cout << "N: ";
    cin >> N;

    for (int i = 1; i < N; i *= 2) {
        count++;
    }

    // if N is 10^8
    // the no of instructions will be (10^8)/2
    // that is equivalent to 10^8 only
    // so its time complexity is: O(N)
    cout << count;
    return 0;
}