// Maximum waterlocked 
// approach - use 2 pointer 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxWater(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxArea = 0;
    while (left < right) {
        int width = right - left;
        int h = min(height[left], height[right]);
        maxArea = max(maxArea, h * width);
        if (height[left] < height[right])
            left++;
        else
            right--;
    }
    return maxArea;
}
int main() {
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; ++i) {
        cin >> height[i];
    }
    cout << maxWater(height) << endl;
    return 0;
}




// revision 1 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int getMaxWater(vector<int>& v) {
    int l = 0, r = v.size() - 1;
    int ans = 0;
    while (l < r) {
        int w = r - l;
        int h = min(v[l], v[r]);
        ans = max(ans, h * w);
        if (v[l] < v[r])
            l++;
        else
            r--;
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << getMaxWater(v) << endl;
    return 0;
}
