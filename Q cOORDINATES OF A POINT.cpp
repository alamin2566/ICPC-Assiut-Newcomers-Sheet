#include<bits/stdc++.h>
using namespace std;
int main(){
   long double x,y;
    cin>>x>>y;
    if(x>0 && 0<y)
    {
        cout<<"Q1"<<'\n';

    }

    else if(x<0&& 0<y)
    {
        cout<<"Q2"<<'\n';

    }
    else if(x<0 && 0>y)
    {
        cout<<"Q3"<<'\n';
    }
    else if(x>0 &&0>y)
    {
        cout<<"Q4"<<'\n';

    }
    else if(x==0 && y==0){
        cout<<"Origem"<<'\n';
    }

    else if(y==0 && x!=0){
            cout<<"Eixo X"<<'\n';

    }
    else if(x==0 && y!=0 ){
        cout<<"Eixo Y"<<'\n';
    }


}
