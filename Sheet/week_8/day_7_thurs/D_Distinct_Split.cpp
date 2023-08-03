#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        int arr[26] = {0};
        int arr2[26] = {0};

        for(auto i : s) arr[ i - 'a']++;

        int ans = 0;

        for(auto i : s){

            arr[i - 'a']--;
            arr2[i - 'a']++;

            int cur = 0;

            for(int i=0; i<26; i++){

                cur += min(1,arr[i] )+ min(1,arr2[i]);
                
            }
            ans = max(ans,cur);
        }

        cout<<ans<<endl;


  
        
        
    }
    


    return 0;
}