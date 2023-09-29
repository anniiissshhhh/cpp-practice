#include <iostream>
using namespace std;

int main() {
    // right angled triangule pattern
    int noOfRows;
    int noOfCols;
    string value;

    cout << "no of rows: ";
    cin >> noOfRows;

    value = "*";

    for (int row = 1; row <= noOfRows; row++) {
        noOfCols = row;
        for (int col = 1; col <= noOfCols; col++) {
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}