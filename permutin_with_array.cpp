#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    int size2[x];
    
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    sort (arr,arr+x);
  
    for(int i=0;i<x;i++){
        cin>>size2[i];

    }
     sort(size2,size2+x);
    
    
    bool noob=0;
    for(int i=0;i<x;i++){
        if(arr[i]!=size2[i]){
            noob=1;
            break;
           
        }
        
    }
    if(noob==0){
        cout<<"yes"<<'\n';
    }
    else{
        cout<<"no"<<'\n';
    }

}