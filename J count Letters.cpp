#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

int main(){
     ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin  >> s;
    int size = s.size();
    for (int i = 97; i <= 122; i++){
        int countv = 0;
        for(int j = 0; j < size; j++){
            if(i == int(s[j])) countv++;
        }
        if(countv > 0 ){
            cout << char(i) << " : " << countv << nl;
        }
    }
    return 0;
}
