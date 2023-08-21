#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<char,char>mp;

void mir(){

    mp['A'] = 'A';
	mp['H'] = 'H';
	mp['I'] = 'I';
	mp['E'] = '3';
	mp['J'] = 'L';
	mp['L'] = 'J';
	mp['M'] = 'M';
	mp['O'] = 'O';
	mp['T'] = 'T';
	mp['U'] = 'U';
	mp['V'] = 'V';
	mp['W'] = 'W';
	mp['X'] = 'X';
	mp['S'] = '2';
	mp['Y'] = 'Y';
	mp['Z'] = '5';
	mp['1'] = '1';
	mp['2'] = 'S';
	mp['3'] = 'E';
	mp['5'] = 'Z';
	mp['8'] = '8';

}
int main(){

    mir();

    string s;
    while (cin>>s)
    {
        stack<char>st;

        bool pal=true, mirror = true;

        int i=0;

        while (i< s.size()/2)
        {
            st.push(s[i]);
            i++;
        }

        if( s.size() % 2 != 0){

            if(!mp.count(s[i])) mirror = false;
            if(mp[s[i]] != s[i]) mirror = false;
            i++;
        }

        while (i<s.size())
        {
            if(st.top() != s[i]) pal = false;

            if(!mp.count( st.top()) || mp[st.top()] != s[i]) mirror = false;

            st.pop();
        }

        cout<<s<<" ";

        if(pal && mirror) cout<<"-- is a mirrored palindrome."<<endl;

        if(pal && !mirror) cout<<"-- is a regular palindrome."<<endl;

        if(!pal && mirror) cout<<"-- is a mirrored string."<<endl;

        if(!pal && !mirror) cout<<"-- is not a palindrome."<<endl;
        
        cout<<endl;

        
    }
    



  
    


    return 0;
}