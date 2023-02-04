#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
   int minn=INT_MAX;
   for(int i=0;i<t;i++){
     int cnt=0;
     while(arr[i]%2==0){
              arr[i]/=2;
              cnt++;
                
     }
        minn=min(minn,cnt);

   }
  
     cout<<minn<<'\n';
     
   
 
}