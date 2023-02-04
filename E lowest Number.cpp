#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int mn=1e9;
    for(int i=0;i<x;i++){
        mn=min(mn,a[i]);

    }
    cout<<mn<<" ";
    for(int i=0;i<x;i++){
        if(a[i]==mn){
            cout<<i+1<<" ";
            return 0;
        }
    }

}
