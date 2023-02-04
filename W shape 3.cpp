#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        int space=x-i;
        int star=2*i-1;
        for(int i=1;i<=space;i++){
            cout<<" ";
        }
        for(int i=1;i<=star;i++){
            cout<<"*";
        }

      cout<<'\n';
    }
    for(int i=x;i>=1;i--){
        int space=x-i;
        int star=2*i-1;
        for(int i=1;i<=space;i++){
            cout<<" ";
        }
        for(int i=1;i<=star;i++){
            cout<<"*";
        }
        cout<<'\n';


    }
}
