#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        deque<int>q;
        vector<int>v;

        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;
            q.push_back(a);
            v.push_back(a);
        }

        auto mx = n;
        int mn = n;
        int i=0;
        int j = n-1;
        

        while (!q.empty())
        {
           while (q.back() != mx)
           {
             i++;
           }

           for (int x = i; x < j; x++)
           {
             cout<< v[i] <<" ";
             q.pop_back();
           }

           mx = *max_element(q.begin(),q.end());
           j = i;
           i=0;

           
           
            
        }
        
        cout<<endl;

       
    }

    return 0;
}
