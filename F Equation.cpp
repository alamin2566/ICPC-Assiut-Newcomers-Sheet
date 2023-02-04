#include<bits/stdc++.h>
using namespace std;
long long noob(int x,int y){
          long long ans=0;

          for(int i=2;i<=y;i+=2){
            ans+=pow(x,i);

     }
   return ans;


}
 int main(){
     int a,b;
     cin>>a>>b;
     cout<<noob(a,b)<<'\n';
 }
