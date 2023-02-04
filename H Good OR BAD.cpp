#include<bits/stdc++.h>
#define n1 '\n'
using namespace std;
int main(){
   int s;
   cin>>s;
    while(s--){
            string k;
             cin>>k;
             int a=k.find("010");
             int b=k.find("101");
             if(a!=string::npos || b!=string::npos){
                cout<<"Good"<<n1;
             }
             else{
                cout<<"Bad"<<n1;
             }

    }



}
