#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        string s;
        cin>>s;

        int freq[26]={0};

        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i]-'a']++;
        }

        string tmp ;

        for (int i = 0; i < 26; i++)
        {
            int times = freq[i]*2;
            while (times--)
            {
                tmp += (char) i + 'a';
            }
            
        }

        int sz = tmp.size();
        vector<char>v(sz);
        int l=0,r=sz-1;

        for (int i = 0; i < sz; i++)
        {
            char c = tmp[i];

            if(i%2==0){
                v[l] = c;
                l++;
            }
            else{

                v[r] = c;
                r--;
            }  

        }
        
        for(auto i :v) cout<<i;
        cout<<endl;


        

        
    }
    


    return 0;
}