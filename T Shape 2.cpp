#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
            int space=x-i;
             int star=2*i-1;

             for(int j=1;j<=space;j++){
                cout<<' ';
             }
             for(int k=1;k<=star;k++){
                cout<<"*";
             }
             cout<<'\n';

        }
}
