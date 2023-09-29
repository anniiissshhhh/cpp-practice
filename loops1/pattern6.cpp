#include <iostream>
using namespace std;

int main() {
    // numerical rectangular pattern
    int noOfRows;
    cout << "no of rows: ";
    cin >> noOfRows;

    int value;

    for (int row = 1; row <= noOfRows; row++) {
        // printing first triangle (numbers)
        int noOfCols1 = noOfRows;
        for (int col = row; col <= noOfCols1; col++) {
            value = col;
            cout << value << " ";
        }

        // printing second triangle (numbers)
        int noOfCols2 = row - 1;
        for (int col = 1; col <= noOfCols2; col++) {
            value = col;
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}