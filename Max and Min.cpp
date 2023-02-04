#include<bits/stdc++.h>
using namespace std;

  int minimum(int a[],int x){
        int minn=INT_MAX;
        for(int i=0;i<x;i++){
            if(a[i]<minn)
                minn=a[i];

        }
        return minn;


  }



  int maximum(int a[],int x){
      int maxx=INT_MIN;
      for(int i=0;i<x;i++){
        if(a[i]>maxx)
            maxx=a[i];

      }
      return maxx;



  }

  void alu(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    cout<<minimum(a,x)<<" "<<maximum(a,x);


}
int main(){

    alu();

    return 0;
}
