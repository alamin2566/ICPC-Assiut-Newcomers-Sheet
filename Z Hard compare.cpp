#include<bits/stdc++.h>
#define n1 '\n'
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long double x=b*log10(a), y=d*log10(c);
    if(x>y){
        cout<<"YES"<<n1;
    }
    else{
        cout<<"NO"<<n1;
    }

}
