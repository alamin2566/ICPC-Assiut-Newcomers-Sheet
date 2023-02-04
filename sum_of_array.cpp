#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<x;i++){
        sum+=arr[i];
    }
    cout<<sum<<'\n';
}