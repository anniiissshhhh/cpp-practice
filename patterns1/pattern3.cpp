#include <iostream>
using namespace std;

int main() {
    int noOfRows;
    int noOfCols;

    cout << "rows: ";
    cin >> noOfRows;
    cout << "cols: ";
    cin >> noOfCols;

    for (int row = 0; row < noOfRows; row++) {
        // printing first triangle (spaces)
        for (int col = 0; col < noOfCols; col++) {
            cout << " "
                 << " ";
        }
        cout << endl;
    }
    return 0;
}