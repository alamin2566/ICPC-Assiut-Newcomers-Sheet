#include<bits/stdc++.h>
using namespace std;
int main(){
     string  s1,s2,sum;
     cin>>s1>>s2;
     int len=s1.size();

     int len2=s2.size();
       sum=s1+s2;
     cout<<len<<" "<<len2<<'\n'<<sum<<'\n';
     char al=s1[0];
     s1[0]=s2[0];
     s2[0]=al;
     cout<<s1<<" "<<s2;
}
