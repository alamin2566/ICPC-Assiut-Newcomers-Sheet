#include<bits/stdc++.h>
using namespace std;
int alu(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<x;i++){
        if(a[i]==0){
            count++;
        }
    }
    for(int i=0;i<x;i++){
        if(a[i]!=0){
            cout<<a[i]<<" ";
        }
    }
    for(int i=0;i<count;i++){
        cout<<0<<" ";
    }

}

 int main(){

     alu();
 }
