#include<bits/stdc++.h>
using namespace std;
bool islucky(int alu){
     while(alu>0){
     int digit=alu%10;
     if(digit==4 || digit==7){}
     else return false;
      alu/=10;
     }
     return true;
     }

int main(){
    int x1,x2;
    cin>>x1>>x2;
    bool found=false;
    for(int i=x1;i<=x2;i++){
        if(islucky(i)){
            cout<<i<<' ';
            found=true;
        }
    }
    if(!found)cout<<-1;

}
