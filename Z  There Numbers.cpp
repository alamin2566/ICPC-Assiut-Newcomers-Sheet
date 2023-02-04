#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,s,x,y,z;
    cin>>k>>s;
    int cnt=0;
    for( x=0;x<=k;x++){
        for( y=0;y<=k;y++){
                z=s-x-y;
        if (z>=0 && z<=k){
            cnt++;
        }

        }
    }
    cout<<cnt<<'\n';


}
