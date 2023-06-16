#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int longestKSubstr(string s, int k) {
    // your code here

    int n = s.size();
    int ans = -1, dif=0;
    int i=0, j=0;

    int freq[26]={0};

    while (j<n)
    {
        char ch = s[j];

        if( freq[ ch - 'a'] == 0) dif++;
        freq[ ch - 'a']++;

        if(dif>k){

            char lch = s[i];
            freq[ lch - 'a']--;

            if( freq[lch - 'a']==0) dif--;
            i++;
        }

        if(dif==k) ans = max(ans, j-i+1);

        j++;

    }


    return ans;
    

}


int main(){


    return 0;
}