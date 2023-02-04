#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x,y;
    cin>>x>>y;
    long long sum=y%x;
    
    if(sum==0){
        cout<<"YES"<<'\n';
    }
    
    else{
        cout<<"NO"<<'\n';
    }
}