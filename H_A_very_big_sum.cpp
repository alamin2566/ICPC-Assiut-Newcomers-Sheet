#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  x;
    cin>>x;
    long long arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
   long long sum=0;
    for(int i=0;i<x;i++){
        sum+=arr[i];
    }
    cout<<sum<<'\n';
}