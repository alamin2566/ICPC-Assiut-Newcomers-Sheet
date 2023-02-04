#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x],count=0;
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int minimum=a[0];
    for(int i=1;i<x;i++){
        if(a[i]<minimum){
            minimum=a[i];
        }
    }
    for(int i=0;i<x;i++){
        if(a[i]==minimum){
                count++;

        }
    }
    if(count%2!=0){
        cout<<"Lucky"<<'\n';
    }
    else{
        cout<<"Unlucky"<<'\n';
    }
    return 0;
}
