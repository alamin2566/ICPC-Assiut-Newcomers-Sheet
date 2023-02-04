/*#include<bits/stdc++.h>
using namespace std;
void fact(int y){
    long long x,m=1;
    for(x=1;x<=y;x++){
        m=m*x;
    }
    cout<<m<<'\n';

}

int main(){
    int x,y;
    cin>>x;
    for(int i=1;i<=x;i++){
        cin>>y;
        fact(y);
    }


}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x,y;
    cin>>x;
    for(int i=1;i<=x;i++){
        cin>>y;
        long long m=1;
        for(int x=1;x<=y;x++){
            m=m*x;

        }
         cout<<m<<'\n';

    }

}
