#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b;
    char p;
    cin>>a>>p>>b;
    if(p==60){
        if(a<b){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    else if(p==61){
        if(a==b){
            cout<<"Right";
        }
        else {
            cout<<"Wrong";
        }
    }

    else if(p==62){
         if(a>b){
            cout<<"Right";
         }
         else{
            cout<<"Wrong";
         }

    }
}


