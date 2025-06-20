// Knigth fork problem (hard)


#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<pair<int, int>> knightMoves(int a, int b) {
    return {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        set<pair<int, int>> kingAttacks;
        set<pair<int, int>> queenAttacks;
        vector<pair<int, int>> moves = knightMoves(a, b);
        for (auto [dx, dy] : moves) {
            kingAttacks.insert({xk - dx, yk - dy});
            queenAttacks.insert({xq - dx, yq - dy});
        }
        int count = 0;
        for (auto pos : kingAttacks) {
            if (queenAttacks.count(pos)) count++;
        }
        cout << count << endl;
    }
    return 0;
}


// self solving 1 
#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector<pair<int, int>> getMoves(int x, int y) {
    return {
        {x, y}, {x, -y}, {-x, y}, {-x, -y},
        {y, x}, {y, -x}, {-y, x}, {-y, -x}
    };
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int x1, y1;
        cin >> x1 >> y1;
        int x2, y2;
        cin >> x2 >> y2;
        set<pair<int, int>> s1, s2;
        vector<pair<int, int>> moves = getMoves(a, b);
        for (auto m : moves) {
            s1.insert({x1 - m.first, y1 - m.second});
            s2.insert({x2 - m.first, y2 - m.second});
        }
        int z = 0;
        for (auto p : s1) {
            if (s2.count(p)) z++;
        }
        cout << z << endl;
    }
    return 0;
}



// Unmodified Knight Moves(standard question )


#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector<pair<int, int>> knightMoves = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        set<pair<int, int>> attackKing, attackQueen;
        for (auto move : knightMoves) {
            attackKing.insert({x1 - move.first, y1 - move.second});
            attackQueen.insert({x2 - move.first, y2 - move.second});
        }
        int count = 0;
        for (auto pos : attackKing) {
            if (attackQueen.count(pos)) count++;
        }
        cout << count << endl;
    }
    return 0;
}
