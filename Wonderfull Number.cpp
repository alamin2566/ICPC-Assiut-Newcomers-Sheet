#include<bits/stdc++.h>
using namespace std;


  int isPalindrome(int n){
       string a1,b2;
       int mod;
       while(n){
        mod=n%2;
         n= n/2;
        if(mod==0){
            a1=a1+"0";
        }
        else{
            a1=a1+"1";
        }
       }
       b2=a1;
       reverse(b2.begin(),b2.end());
       if(a1==b2){
          return true;
       }
       else{
        return false;
       }


  }



  bool isodd(int x){
      if(x&1){
        return true;
      }
      else{
        return false;
      }
      return true;

  }
int main(){
       int j;
       cin>>j;
       if(isPalindrome(j)&& isodd(j)){
        cout<<"YES"<<'\n';
       }
       else{
        cout<<"NO"<<'\n';
       }
       return 0;


}
