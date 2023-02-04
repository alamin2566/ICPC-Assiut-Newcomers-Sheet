#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,sum;
    char p;
    cin>>x>>p>>y>>sum;
    if(p=='*'){
        if(x*y==sum){
            cout<<"Yes";
        }
        else{
            cout<<x*y;

        }
          }
           else if(p=='+'){
              if(x+y==sum){
                cout<<"Yes"<<'\n';
              }
              else{
                cout<<x+y;
              }

          }

          else if(p=='-'){
            if(x-y==sum){
                cout<<"Yes";
            }
            else{
                cout<<x-y;
            }
          }



}
