#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int mx=max(x,max(y,z));
    int mn=min(x,min(y,z));
    int md=(x+y+z)-(mx+mn);
    cout<<mn<<'\n'<<md<<'\n'<<mx<<'\n';
    cout<<'\n'<<x<<'\n'<<y<<'\n'<<z<<'\n';

}
