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
    for(int i=0;i<x;i++){
        for(int j=y-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
         

        }
        cout<<'\n';
       
    }
}