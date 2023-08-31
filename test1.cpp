#include <iostream>

using namespace std;

int main() {
    long long l, r;
    cin >> l >> r;
    
    cout << "YES" << endl;
    
    for (long long i = 0; i <= (r - l) / 2; i++) {
        cout << l + i * 2 << " " << l + i * 2 + 1 << endl;
    }
    
    return 0;
}
