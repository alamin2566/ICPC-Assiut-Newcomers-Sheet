#include<bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cin>>x;
    if(x>='A' && x<='Z') {

        cout<<"ALPHA"<<'\n';
        cout<<"IS CAPITAL"<<endl;
    }
    else if(x>='a'&& x<='z'){
            cout<<"ALPHA"<<'\n';
         cout<<"IS SMALL"<<'\n';

    }
    else {
        cout<<"IS DIGIT";

    }

}
