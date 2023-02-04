#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,k;
    cin>>x>>k;
    int arr[x];
    for(int i=1;i<=x;i++){
        cin>>arr[i];
    }
    int cnt=0;
    
    for(int i=1;i<=x;i++){
       
    for(int j=i+1;j<=x;j++){
            if((arr[i]+arr[j])%k==0){
                cnt++;
            }
           
        }
   
    }
     
    cout<<cnt<<'\n';
    
   
}