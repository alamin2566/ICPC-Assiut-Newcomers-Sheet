#include<bits/stdc++.h>
using namespace std;
int main(){
    int  a,b,c,d;
    cin>>a>>b>>c>>d;
    a =a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    int  sum = a*b*c*d;
    int last_digit=sum%100;

    if(last_digit<10){
        cout<< 0 <<last_digit<<'\n';
    }
    else{
        cout<<last_digit<<'\n';
    }

}
