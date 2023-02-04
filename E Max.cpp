/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x];

    for(int i=0;i<x;i++){
            cin>>a[i];
      }
    int mx=-100;
    for(int i=0;i<x;i++){
        if(a[i]>mx){
            mx=a[i];
        }
    }
    cout<<mx<<'\n';
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,mx=0;
    cin>>x;
    for(int i=0;i<x;i++){
        int alu;
        cin>>alu;
        if(alu>mx)
            mx=alu;

    }
    cout<<mx;

}
