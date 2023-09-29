#include <iostream>
using namespace std;

int main() {
    //! taking input in arrays
    //? using for loop
    // char vowels[5];
    // for (int i = 0; i < 5; i++) {
    //     cout << "vowel: ";
    //     cin >> vowels[i];
    // }

    // for (char ele : vowels) {
    //     cout << ele << " ";
    // }

    //? using for-each loop
    char vowels[5];
    for (char &ele : vowels) {
        cout << "vowel: ";
        cin >> ele;
    }

    for (char ele : vowels) {
        cout << ele << " ";
    }
    return 0;
}