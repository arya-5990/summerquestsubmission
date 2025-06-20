// I love strings
// Approach
// Read test cases (N)
// for each test case read string S and T 
// use loop to alternate characters from S and T 
// if string is shorter append the remainf charactera

#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    while (N--) {
        string S, T;
        cin >> S >> T;
        string result = "";
        int i = 0, lenS = S.length(), lenT = T.length();
        int maxLen = max(lenS, lenT);
        for (i = 0; i < maxLen; ++i) {
            if (i < lenS) result += S[i];
            if (i < lenT) result += T[i];
        }
        cout << result << endl;
    }
    return 0;
}



// Longest Common Prefix
// Approach vertical scanning 
// start by assuming the first prefix of firstr strin ,compare,reduce the charater until the match with start of every string 
// for empty return ""

#include <iostream>
#include <vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    string prefix = strs[0];
    for (int i = 1; i < strs.size(); ++i) {
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}
int main() {
    int N;
    cin >> N;
    vector<string> strs(N);
    for (int i = 0; i < N; ++i) {
        cin >> strs[i];
    }
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}
