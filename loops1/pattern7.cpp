#include <iostream>
using namespace std;

int main() {
    // normal pattern - 123456... in all rows
    int noOfRows;
    cout << "no of rows: ";
    cin >> noOfRows;

    int value;

    for (int row = 1; row <= noOfRows; row++) {
        // printing cols (numbers)
        int noOfCols = noOfRows;
        for (int col = 1; col <= noOfCols; col++) {
            value = col;
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}