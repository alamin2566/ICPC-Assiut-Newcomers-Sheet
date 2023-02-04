#include<bits/stdc++.h>
using namespace std;

int main(){
string str;
   cin >> str;

   int arr[26];
   for (int i = 0; i < 26; i++)
      arr[i] = 0;

   for (int i = 0; i < str.size(); i++)

      arr[str[i] - 'a']++;


   for (int i = 0; i < 26; i++) {



      char ch = 'a' + i;
      cout << ch << " : ";
      cout << arr[i] << '\n';
   }
}
