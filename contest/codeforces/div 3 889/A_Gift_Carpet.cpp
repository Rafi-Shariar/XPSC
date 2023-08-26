#include <bits/stdc++.h>
using namespace std;
int main() {

    
    int t;
    cin>>t;

    while (t--) {

        int n, m;
        cin>>n>>m;

        char arr[n][m];

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                cin >> arr[i][j];
            }
        }

        int v = -1, ii = -1, k = -1, a = -1;

        for (int col = 0; col < m; col++) {

            for (int row = 0; row < n; row++) {

                if (arr[row][col] == 'v') { 
                    v = col;
                    break;
                }
            }
            if (v != -1) break;
        }

        for (int col = v + 1; col < m; col++) {

            for (int row = 0; row < n; row++) {

                if (arr[row][col] == 'i') {

                    ii = col;
                    break;
                }
            }
            if (ii != -1) break;
        }

        for (int col = ii + 1; col < m; col++) {

            for (int row = 0; row < n; row++) {

                if (arr[row][col] == 'k') {

                    k = col;
                    break;
                }
            }
            if (k != -1) break;
        }

        for (int col = k + 1; col < m; col++) {

            for (int row = 0; row < n; row++) {

                if (arr[row][col] == 'a') {

                    a = col;
                    break;
                }
            }
            if (a != -1) break;
        }

        // cout<<v<<" "<<ii<<" "<<k<<" "<<a<<endl;

        if (v != -1 && ii != -1 && k != -1 && a != -1 && v < ii && ii < k && k < a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
            
      
    }







    return 0;
}
