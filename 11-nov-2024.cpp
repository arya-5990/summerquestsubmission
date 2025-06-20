//Is B subsequence of A
// Approach 
// Use two pointer approach here 
// traverse in both array ,if element matches move pointer forward ,otherwise move only the pointer in A,if we reached the end of B its a subsequence 


#include <iostream>
#include <vector>
using namespace std;
string checkSubsequence(int x, int y, vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    while (i < x && j < y) {
        if (a[i] == b[j]) {
            j++;
        }
        i++;
    }
    return (j == y) ? "True" : "False";
}
int main() {
    int x, y;
    cin >> x >> y;
    vector<int> a(x), b(y);
    for (int i = 0; i < x; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < y; ++i) {
        cin >> b[i];
    }
    cout << checkSubsequence(x, y, a, b) << endl;
    return 0;
}



// Merge two strings alternatively 
// Approach 
// Use 2 pointer approach , initialize ,iterate and merge ,remaining characters (if either of string ends loop continues )


#include <iostream>
using namespace std;
string mergeAlternately(string word1, string word2) {
    string result = "";
    int i = 0, j = 0;
    int n = word1.length(), m = word2.length();

    while (i < n || j < m) {
        if (i < n) result += word1[i++];
        if (j < m) result += word2[j++];
    }
    return result;
}
int main() {
    string word1, word2;
    cin >> word1 >> word2;
    cout << mergeAlternately(word1, word2) << endl;
    return 0;
}
