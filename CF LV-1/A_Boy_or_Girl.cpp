#include<bits/stdc++.h>
using namespace std;
int main(){
 
    string s;
    cin>>s;
 
    set<char>st;
 
    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
    }
 
    int sz = st.size();
    
    if (sz%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    
    
 
    
 
 
 
    return 0;
}