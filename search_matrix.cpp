#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }

    }
  int x;
  cin>>x;
  bool noob=0;
   for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        if(arr[i][j]==x){
        
            noob=1;
            break;
            }
    
   }
   }
   if(noob){
    cout<<"will not take number"<<"\n";
   }
   else{
    cout<<"will take number"<<'\n';
   }
   
}