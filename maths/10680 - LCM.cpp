#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll arr[1000010]={0};

int gcd(ll a, ll b)
{
    // Find Minimum of a and b
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
 
    // Return gcd of a and b
    return result;
}
void LCM_gen(){

    arr[2] = 2;

    for (ll i = 3; i <= 1000001; i++)
    {
        ll v1 = arr[i-1];
        ll v2 = i;
        arr[i] = (v1*v2)/ gcd(v1,v2);
    }

}
int main(){

    fast();
    LCM_gen();

     ll a; 

    while (cin>>a && a!=0)
    {

         ll val = arr[a];
      
         while (val>0)
         {
            int tmp = val%10;

            if(tmp>0){
                cout<<tmp<<endl;
                break;
            }
            val/=10;
         }
         

    
  
    }
       

    return 0;
}