#include<bits/stdc++.h>
using namespace std;


int main(){

  
     int n; cin>>n;
     string s;
     cin>>s;

     int fre[26] = {0};
     int sum = 0;

     for (int i = 0; i < n; i++)
     {
       char ch = s[i];
       fre [ch - 'a']++;
     }

     for (int i = 0; i < 26; i++)
     {
       if( fre[i] > 0){

        char ch = i+97;

        for (int j = 1; j <= fre[i]; j++)
        {
          cout<<ch;
        }
        
       }
     }
     


     

   
   
 
 

    return 0;
}
/*

BRITISH EGYPT GHANA
BRITISH GHANA

ITALYKOREA EGYPTEGYPT ALGERIA EGYPT Z
ITALYKOREA  ALGERIA Z

*/