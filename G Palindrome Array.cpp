#include<bits/stdc++.h>
using namespace std;
int pal=0;
void palindrome(int a[],int x){
          bool palindrome=false;
          for(int i=0;i<=x/2;i++){
            if(a[i]!=a[x-i-1])
                pal++;
          }
          if(pal!=0){
            cout<<"NO";
          }
          else{
            cout<<"YES";
          }


}

int main(){
   int x;
   cin>>x;
   int a[x];
   for(int i=0;i<x;i++){
    cin>>a[i];
   }
   palindrome(a,x);

}
