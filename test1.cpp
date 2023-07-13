#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   char arr[22][36]={'.'};
   memset(arr, ' ', sizeof(arr));

   arr[17][1] = 'D'; arr[17][33]= 'Y';  
   arr[16][2] = 'A'; arr[16][32]= 'T';  
   arr[15][3] = 'F'; arr[15][31]= 'I';  
   arr[14][4] = 'F'; arr[14][30]= 'S';  
   arr[13][5] = 'O'; arr[13][29]= 'R';  
   arr[12][6] = 'D'; arr[12][28]= 'E';  
   arr[11][7] = 'I'; arr[11][27]= 'V';  
   arr[10][8] = 'L'; arr[10][26]= 'I';  
   arr[9][9] = ' '; arr[9][25]= 'N';  
   arr[8][10] = 'I'; arr[8][24]= 'U';  
   arr[7][11] = 'N'; arr[7][23]= ' ';  
   arr[6][12] = 'T'; arr[6][22]= 'L';  
   arr[5][13] = 'E'; arr[5][21]= 'A';  
   arr[4][14] = 'R'; arr[4][20]= 'N';  
   arr[3][15] = 'N'; arr[3][19]= 'O';  
   arr[2][16] = 'A'; arr[2][18]= 'I'; 
   arr[1][17] = 'T';

   for (int i = 2; i <= 22; i++)
   {
      arr[i][17] =' ';
   }

   string s = "Department of CSE";

   for (int i = 8; i <= 25; i++)
   {
      char ch = s[i-8];
      arr[17][i] = ch;
   }

   string b = "Batch 64";

   for (int i = 13; i <=20; i++)
   {
      char ch = b[i-13];
      arr[12][i] = ch;
   }

   string c = "Section F";

   for (int i = 12; i <=20; i++)
   {
      char ch = c[i-12];
      arr[14][i] = ch;
   }
   

   

   

   for (int i = 0; i < 20; i++)
   {
      for (int j = 0; j < 36; j++)
      {
         cout<<arr[i][j];

      }
      cout<<endl;
      
   }
   

   

       
       
       
        
    
    


    return 0;
}