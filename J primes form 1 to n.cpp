#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=2;i<=x;i++){
        int count=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            cout<<i<<" ";
        }
    }

}
