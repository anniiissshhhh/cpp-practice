#include <iostream>
using namespace std;

int main() {
    // 2d arrays
    int n;
    cout << "n: ";
    cin >> n;

    int m;
    cout << "m: ";
    cin >> m;

    int array[n][m];

    for (int i = 0; i < n; i++) {
        cout << "\nrow" << i + 1 << ": " << endl;
        for (int j = 0; j < m; j++) {
            cout << " col" << j + 1 << ": ";
            cin >> array[i][j];
        }
    }

    cout << "\narray[" << n << "][" << m << "]: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}