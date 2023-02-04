#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int sum,cnt=0,knt=0,z=0;
    for(int i=0;i<x;i++){
        if(arr[i]>0){
            cnt++;
        }
        else if(arr[i]<0){
            knt++;
        }
        else{
            z++;
        }
    }
    cout<<fixed<<setprecision(6)<<(double)(cnt)/(double)(x)<<'\n';
    cout<<fixed<<setprecision(6)<<(double)(knt)/(double)(x)<<'\n';
    cout<<fixed<<setprecision(6)<<(double)(z)/(double)(x)<<'\n';
 
   
   


}