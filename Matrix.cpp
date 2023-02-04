#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
   int arr[x][x];
   for(int i=0;i<x;i++){
          for(int j=0;j<x;j++){
               cin>>arr[i][j];
          }
   }
   int sum1=0,sum2=0;
   for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
        if(i==j){
            sum1+=arr[i][j];
        }
    }
   }
   for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
        if(i+j==x-1){
            sum2+=arr[i][j];
        }
    }
   }
   int noob=sum1-sum2;
   cout<<abs(noob)<<'\n';
}
