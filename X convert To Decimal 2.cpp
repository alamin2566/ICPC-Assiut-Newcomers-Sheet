#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){

        int a,b=0;
        cin>>a;
        long long  alu=0;
        while(a){
            int y=a%2;
            a=a/2;
            if(y==1){
                alu+=pow(2,b);
                b++;

            }
        }
        cout<<alu<<'\n';
    }
}
