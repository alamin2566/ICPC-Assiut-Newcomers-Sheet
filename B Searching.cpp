#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,flag=false;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int j;
        cin>>j;
    for(int i=0;i<x;i++){

        if(a[i]==j){
            cout<<i<<'\n';
            flag=true;
            break;

        }


    }
    if(!flag)
        cout<<"-1";

        return 0;


}








