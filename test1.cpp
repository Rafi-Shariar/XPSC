#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    vector<int>v(n);
    int freq[3001]={0};
    set<int>st;
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        freq[v[i]]++;
        st.insert(v[i]);
        mx = max(mx,v[i]);
    }

    if(st.size()==n){
        cout<<0<<endl;
        return 0;
    }

    int c=0;
    int cur;

    for (int i = 0; i < n; i++)
    {
        if(freq[v[i]]<=1) continue;
        else
        { 
             freq[v[i]]--;
            int terms = freq[v[i]];

            while (terms-->=1)
            {
                
            cur = v[i]+1;
            c++;

            while (st.find(cur) == st.end())
            {
                cur++;
                c++;
            }

            st.insert(cur);

            }
            
        }
        

    }

    cout<<c<<endl;


    
    




    
    


    return 0;
}