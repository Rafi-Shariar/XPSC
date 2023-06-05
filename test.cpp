#include<bits/stdc++.h>
using namespace std;


int main(){

    string find = "EGYPT";

    string s; cin>>s;
    vector<char>v;

    for (int i = 0; i < s.size(); i++)
    {
        cout<<i<<"-->"<<s[i]<<endl;
        if( s[i]=='E'){
            string tmp;
            int j;

            for ( j = i; j <= i+4; j++)
            {
                tmp += s[j];
            }
            cout<<tmp<<endl;
            if( tmp == find) i = i+4;
        }

        v.push_back(s[i]);
        
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    
    


 
 

    return 0;
}
/*

BRITISH EGYPT GHANA
BRITISH GHANA

ITALYKOREA EGYPTEGYPT ALGERIA EGYPT Z
ITALYKOREA  ALGERIA Z

*/