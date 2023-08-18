#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n,k;
   cin>>n>>k;
   vector<char>fre(26,0);
   map<char,int>mp;
   string s; cin>>s;

   for (int i = 0; i < n; i++)
   {
     char a=s[i];
     fre[a-'A']++;

   }

   sort(fre.rbegin(), fre.rend());


  int i=0;
  ll sum=0;

  while (k && i<26)
 {
    ll c = fre[i];

    if(k>=c){
        k -= c;
        sum += c*c;
    }
    else
    {
        sum += k*k;
        break;
    }

    i++;
    

  }

  cout<<sum<<endl;
  
   
   


    


    return 0;
}