#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    int ans = 0;
    priority_queue<int> buffs; // Using a max heap in C++
    for (int i = 0; i < n; ++i) {
        int e = s[i];
        if (e > 0) {
            buffs.push(-e); // Pushing negative for max heap effect
        } else if (!buffs.empty()) {
            ans -= buffs.top();
            buffs.pop();
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}
