#include<bits/stdc++.h>
#define n1 '\n'
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int a;
        cin>>a;
        int arr[a+1];
           int mini=INT_MAX;
        for(int i=1;i<=a;i++){
            cin>>arr[i];
        }
        for(int i=1;i<=a;i++){


            for(int j=i+1;j<=a;j++){
                mini=min(mini,(arr[i]+arr[j]+j-i));
            }

        }
        cout<<mini<<n1;

    }
}
