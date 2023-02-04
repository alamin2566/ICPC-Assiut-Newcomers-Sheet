#include<bits/stdc++.h>
#define n1 '\n'
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--) {
    string s1,s2;
    cin>>s1>>s2;
    int mini=min(s1.size(),s2.size());
    for(int i=0;i<mini;i++){
        cout<<s1[i]<<s2[i];
    }
    for(int i=mini;i<s1.size();i++){
        cout<<s1[i];

    }
    for(int i=mini;i<s2.size();i++){
        cout<<s2[i];
    }
     cout<<n1;





}
}


