#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
int search(string pat, string txt) {

    int n = txt.size();
    int k = pat.size();

    int fr1[26]={0};
    int fr2[26]={0};

    for(auto c : pat) fr1[ c-'a']++;

    int i=0,j=0,c=0;

    while (j<n)
    {
        fr2[ txt[j] - 'a']++;

        if( j <k-1) j++;
        else
        {
            bool ok = true;
            for (int v = 0; v < 26; v++)
            {
                if( fr1[v] != fr2[v]){
                    ok = false;
                    break;
                }
            }

            if(ok) c++;

            fr2[ txt[i] - 'a']--;
            i++;
            j++;
            
        }
        
    }

    return c;
    
	
}


int main(){

    return 0;
}