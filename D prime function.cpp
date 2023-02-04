#include<bits/stdc++.h>
using namespace std;
int noob(){
      int x;
      cin>>x;
        while(x--){
            int a,sum=0;
            cin>>a;
            for(int i=1;i<=sqrt(a);i++){
                if(a%i==0){

                    sum++;
                }
            }
            if(sum==1 && a!=1){
                    cout<<"YES"<<'\n';

        }
        else{
            cout<<"NO"<<'\n';
        }
}

}
 int main(){
     noob();
 }
