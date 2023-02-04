#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int   result =x%10;
    result=x/10;
    int y=result%10;
    y=result/10;
    int j=y%10;
    j=y/10;
    if(j%2==0)
    {
        cout<<"EVEN";
    }
    else
    {
        cout<<"ODD";
    }
}
