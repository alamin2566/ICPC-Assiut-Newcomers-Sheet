#include<bits/stdc++.h>
using namespace std;
int main(){
   int x,dif=0;
   cin>>x;
   int arr[123][123];
   for(int i=1;i<=x;i++){
    for(int j=1;j<=x;j++){
        cin>>arr[i][j];
    }
   }
   for(int i=1,j=1,k=x;i<=x;i++){
     dif+=(arr[i][j++]-arr[i][k--]);

    }
    cout<<abs(dif)<<'\n';

}