#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  int arr[124];
  while(t--){
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    for(int i=0;i<n;i++){

      for(int j=i;j<n;j++){
        if(arr[j]>=arr[j-1]){
          cnt++;
        }
        else

                  break;


    }


  }
  cout<<cnt+n<<'\n';
}
return 0;
}
