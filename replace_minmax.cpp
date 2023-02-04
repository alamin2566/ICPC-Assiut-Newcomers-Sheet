#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
   int  arr[x];
      for(int i=0;i<x;i++){
        cin>>arr[i];
      }
      int minn=INT_MAX,posmin=-1,maxx=INT_MIN,posmax=-1;
     for(int i=0;i<x;i++){
        if(arr[i]<minn){
           minn=arr[i];
           posmin=i;
        }
        if(arr[i]>maxx){
             maxx=arr[i];
             posmax=i;
        }
     }
     int temp=arr[posmax];
     arr[posmax]=arr[posmin];
     arr[posmin]=temp;
     for(int i=0;i<x;i++){
      cout<<arr[i]<<" ";
   
     }
      
}