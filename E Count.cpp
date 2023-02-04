#include<bits/stdc++.h>
using namespace std;
int main(){
  string s1;
  cin>>s1;
  int sum=0;
  for(int i=0;i<s1.size();i++){
       sum=sum+(int)s1[i]-48;
  }
  cout<<sum;

}
