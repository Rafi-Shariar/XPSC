#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int MAX_SIZE = 200020;
int main(){

    int t; cin>>t;

    while (t--)
    {
         int n;
        cin >> n;

        unordered_set<int> freq;
        int c = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if (freq.find(a) == freq.end()) {
                c++;
                freq.insert(a);
            } else {
                c--;
                freq.erase(a);
            }

            ans = max(ans, c);
        }

        cout << ans << endl;
        
    }
    


    return 0;
}