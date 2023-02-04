#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
   int a[x];
    for(int i=0;i<x;i++){
            cin>>a[i];

    }
    for(int i=0;i<x;i++){
        for(int i=i-1;i>=0;i--){
            cout<<a[i];
        }
    }



}
