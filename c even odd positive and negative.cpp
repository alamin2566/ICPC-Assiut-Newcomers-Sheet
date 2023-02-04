#include<bits/stdc++.h>
using namespace std;
int main(){
        int x,even=0,odd=0,pos=0,neg=0;
        cin>>x;
        for(int i=0;i<x;i++){
                int alu;
              cin>>alu;
            if(alu%2==0){
                even++;

            }
            else {
                odd++;
            }
            if(alu>0){
                pos++;
            }
           if(alu<0){
            neg++;
           }
        }
        cout<<"Even: "<<even<<'\n'<<"Odd: "<<odd<<'\n'<<"Positive: "<<pos<<'\n'<<"Negative: "<<neg<<'\n';


}



