#include <iostream>
using namespace std;

int power(int p, int q) {
    // halth condition
    if (q == 0) return 1;

    // assumption and self work
    int result;
    if (q % 2 == 0) {
        result = power(p, q / 2);
        return result * result;
    } else {
        result = power(p, (q - 1) / 2);
        return p * result * result;
    }
}

int main() {
    int ans = power(2, 4);
    cout << ans;
    return 0;
}