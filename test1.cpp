#include<bits/stdc++.h>
using namespace std;

string quick_sort(string a){

  if( a.size()<=1) return a;

  int pivot = a.size()/2;

  string b;
  string c;

  for (int i = 0; i < a.size(); i++)
  {
    if(i==pivot) continue;

    if( a[i]< a[pivot]) b += a[i];
    else c += a[i];
  }

  string sorted_b = quick_sort(b);
  string sorted_c = quick_sort(c);

 

  string sorted_a;

  for (int i = 0; i < sorted_b.size(); i++)
  {
    sorted_a += sorted_b;
  }

  sorted_a += a[pivot];

  
  for (int i = 0; i < sorted_c.size(); i++)
  {
    sorted_a += sorted_c;
  }


  return sorted_a;
   
}

int main(){

  int n; cin>>n;
  string s;
  cin>>s;

  string ans = quick_sort(s);

  cout<<ans<<endl;




    return 0;
}