#include <iostream>
using namespace std;

string removeA(string s, int idx, int n) {
    // base work
    // if there is no element in the string,
    // that is its length is 0
    // we return nothing/empty string
    if (idx == n) return "";
    // assumption
    // that the function removes "a" from the rest of string (idx + 1)
    // removeA(s, idx + i, n);
    // self work
    // return element if its not "a"
    string curr = "";
    curr += s[idx];
    return ((s[idx] == 'a') ? "" : curr) + removeA(s, idx + 1, n);
}

int main() {
    // remove all occurances of "a" from string s = "abcax"
    // o/p => "bcx"
    string s = "abcax";
    int idx = 0;
    int n = 5;
    string ans = removeA(s, idx, n);
    cout << ans;
    return 0;
}