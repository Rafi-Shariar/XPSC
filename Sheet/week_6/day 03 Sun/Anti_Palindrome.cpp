#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;

        cin.ignore();

        char arr[n];

        char freq[26]={0};

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];

            freq[ arr[i] - 'a']++;

        }

        int c =0;

        for (int i = 0; i < 26; i++)
        {
            if( freq[i]>1) c += freq[i] - 1;
        }

        cout<<c<<endl;
        
        

    }
    


    return 0;
}