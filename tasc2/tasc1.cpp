#include <iostream>

using namespace std;

int main() {
    //? q1
    // int n;
    // cin >> n;
    // int value = 0;
    // for (int i = 1; i <= n; i *= 2) {
    //     value++;
    // }
    // cout << value;
    //? soln
    /*
        i: 1 2 4 8 16 32 ...... 2^k
        that is power of 2 and we are multiplying by 2 in each iteration
        loop terminates at (k+1)
        when 2^k <= n
        taking log base 2 on both sides
        k.log(2) base 2 <= log(n) base 2
        k(1) <= log(n) base 2
        therefore no of iterations are log(n)
        * time complexity: O(log(n))
    */

    //? q2
    // int n;
    // cin >> n;
    // int value = 0;
    // for (int i = 1; i <= n; i += i) {
    //     value++;
    // }
    // cout << value;
    //? soln
    /*
        i = 1, 2, 4, 8, 16, 32, 64 ... 2^k
        SAME AS PREVIOUS ONE
        * time complexity: O(log(n))
    */

    //? q3
    int n;
    cin >> n;
    int val = 0;
    for (int i = 1; i <= n; i *= 2) {
        for (int j = 1; j <= i; j++) {
            val++;
        }
    }
    cout << val;

    //? soln
    /*
        time complexity = O(Nlog(N))
    */
    return 0;
}