// Laser Switch Game
// approach - rewatch the video 
// 


#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;  
    while (t--) {
        long long x, y, z;  
        cin >> x >> y >> z;
        long long alice_moves = x + (z + 1) / 2;  
        long long bob_moves   = y + z / 2;

        if (alice_moves > bob_moves)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}

// continue lecture from 21:34 