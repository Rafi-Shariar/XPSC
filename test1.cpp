#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif


void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main()
{
    fast();
    map<string,int>mp;

    mp["tourist"] = 3858;
    mp["ksun48"]= 3679;
    mp["Benq"]= 3658;
mp["Um_nik"]= 3648;
mp["apiad"]= 3638;
mp["Stonefeang"]= 3630;
mp["ecnerwala"]= 3613;
mp["mnbvmar"]= 3555;
mp["newbiedmy"]= 3516;
mp["semiexp"]= 3481;

  string s; cin>>s;
  cout<<mp[s]<<endl;


    return 0;
}