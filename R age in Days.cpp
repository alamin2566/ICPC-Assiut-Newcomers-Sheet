#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int sum=x/365;
    cout<<sum<<" years"<<'\n';
    int k=x%365;
    int l=k/30;
    cout<<l<<" months"<<'\n';
    cout<<k%30<<" days"<<'\n';
}
