#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,sum=0;
    cin>>x;


    string s;
    cin>>s;
    for(int i=0;i<x;i++){
        sum=sum+((int)s[i]-48);
    }
    cout<<sum<<'\n';

}
