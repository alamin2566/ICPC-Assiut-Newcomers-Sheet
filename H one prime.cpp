#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,alu=0;
    cin>>x;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            alu++;
        }
   }
    if(alu>2){
            cout<<"NO";
        }
        else if(alu<=2)
            {
            cout<<"YES";
        }


}
