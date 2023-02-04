#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,mx;
    mx=0;
    cin>>x;
    int num=x;
    while(x!=0){

        int rem=x%10;
        mx=mx*10+rem;
        x/=10;


  }
    cout<<mx<<'\n';

    if(num==mx){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO";
    }

}
