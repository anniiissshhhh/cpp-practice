#include <iostream>
using namespace std;

int main() {
    // rectangular pattern
    int noOfRows;
    int noOfCol;
    char value = '*';

    cout << "no of rows: ";
    cin >> noOfRows;
    cout << "no of cols: ";
    cin >> noOfCol;
    for (int row = 1; row <= noOfRows; row++) {
        for (int col = 1; col <= noOfCol; col++) {
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}