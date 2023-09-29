#include <iostream>
using namespace std;

int main() {
    // plus pattern
    int n;
    cout << "size: ";
    cin >> n;

    // printing pattern spaces
    int noOfRows = n;
    int noOfCols = n;

    for (int row = 0; row < noOfRows; row++) {
        for (int col = 0; col < noOfCols; col++) {
            if (col == n / 2) {
                cout << "* ";
            } else if (row == n / 2) {
                cout << "* ";
            } else {
                cout << " "
                     << " ";
            }
        }
        cout << endl;
    }

    return 0;
}