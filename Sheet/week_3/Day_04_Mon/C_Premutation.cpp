#include <bits/stdc++.h>
using namespace std;

#define ll long long int
//https://codeforces.com/contest/1790/problem/C
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n][n - 1];
        int uni[n + 1] = {0};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                cin >> arr[i][j];
               
            }
             uni[arr[i][n-2]]++;
        }

        int unique ;
        for (int i = 0; i <= n; i++) if(uni[i]==1) unique = i;

        int freq[n+1]={0};

        for (int i = 0; i < n; i++)
        {
            if(arr[i][n-2]==unique){

                for (int j = 0; j < n-1; j++)
                {
                    cout<<arr[i][j]<<" ";
                    freq [ arr[i][j]]++;
                }
                break;    
            }
        }

        for( int i=1; i<=n; i++) if(freq[i]==0) cout<<i<<endl;
        
            
    }

    return 0;
}
