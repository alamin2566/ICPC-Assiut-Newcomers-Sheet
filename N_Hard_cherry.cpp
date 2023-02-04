#include<bits/stdc++.h>
using namespace std;
  int main(){
    long long x,mx=0;
    cin>>x;

    while(x--){
        int a;
        cin>>a;
        int arr[a];
        for(int i=1;i<=a;i++){
            cin>>arr[i];
        }
        
        for(int i=1;i<=a;i++){
         
         mx=max(mx,(long long)(max((arr[i]),(arr[i-1])))*min((arr[i]),(arr[i-1])));

                
            }
           
         }
    cout<<mx<<'\n';
   

}