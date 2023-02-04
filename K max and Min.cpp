#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
     int x=max(a,b);
     int y=min(a,b);

     cout<<min(y,c)<<" "<<max(x,c);
}
