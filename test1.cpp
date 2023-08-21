#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    string s;int k;
    cin>>s>>k;

    int i=0;
    char c = s[0];

    while (k && i<s.size()-1)
    {
        if(s[i]<s[i+1]){
            swap(s[i],s[i+1]);
            k--;

            if(s[i]> s[i-1]){

                while(k && i>=0 && s[i]>=s[i-1]){
                    swap(s[i],s[i-1]);
                    k--;
                    i--;

                

                }
            }
        }
        
        i++;

    }

    cout<<s<<endl;
    


    return 0;
}