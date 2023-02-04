#include<bits/stdc++.h>
using namespace std;
const int s=100001;
void noob(int arr[s],int k,int j){
    for(int i =k;i<j;i++){
        cout<<arr[i]<<" ";
    }
}
void nob(int arr[s],int k){
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
    int x,y;
    cin>>x>>y;
    int arr[s];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int sh=y%x;
    noob(arr,x-sh,x);
    nob(arr,x-sh);

}

