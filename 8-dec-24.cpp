// Palindrome After K Cut
//  rewatch the video before self revision 

#include <iostream>
#include <string>
#include <vector>
using namespace std;
string canFormPalindrome(const string& s, int k) {
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }
    int odd = 0;
    for (int f : freq) {
        if (f % 2 != 0) odd++;
    }
    int len = s.length() - k;
    if (len < 0) return "NO";

    if (odd <= len + 1) return "YES";
    else return "NO";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        cout << canFormPalindrome(s, k) << endl;
    }
    return 0;
}
