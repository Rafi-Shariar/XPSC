#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    string s1,s2;
    cin>>s1;
    cin>>s2;

    int c=0;

    for (int i = 0; i < s1.size(); i++)
    {
       if( s1[i] != s2[i]) c++;
    }

    cout<<c<<endl;
    


    return 0;
}