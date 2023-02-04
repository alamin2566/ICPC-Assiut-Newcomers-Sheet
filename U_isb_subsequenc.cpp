#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int arr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
        }
    }
    bool cool=0;
    for(int i=0;i<x;i++){

        for(int j=0;j<y;j++){
            if(arr[i][j]<arr[i+1][j+1]){
                cool=1;
                break;
            }
        }
    }
    if(cool){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
    }
}