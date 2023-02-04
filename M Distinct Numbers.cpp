/*#include<bits/stdc++.h>
using namespace std;
 void alu(){
    int x,j,i,count=0;
    cin>>x;
    int a[x+3];
    for( i=0;i<x;i++){
        cin>>a[i];
    }

     sort(a,a+x);
    for(i=0;i<x;i++){

        if(a[i]!=a[i+1]){
            count++;
        }
    }
    cout<<count;


}

 int main(){
     alu();
 }*/



 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]+=1000;
     }
     bool visited[3000];
     for(int i=0;i<3000;i++){
        visited[i]=false;
     }

     for(int i=0;i<n;i++){
        int x=a[i];
        visited[x]=true;

     }
     int cnt=0;
     for(int i=0;i<3000;i++){
        if(visited[i]){
            cnt++;
        }
     }
     cout<<cnt<<'\n';



 }
