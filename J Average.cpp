#include<bits/stdc++.h>
using namespace std;
 double alu(double a[],int n){
     double sum=0;
     for(int i=0;i<n;i++){
        sum=sum+a[i];
     }
     double average=sum/n;
     return average;
 }

 void solve(){
     int n;
     cin>>n;
     double a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     double ans=alu(a,n);
     cout<<fixed<<setprecision(6)<<ans<<'\n';



 }
int main(){
          solve();
          return 0;


            }




