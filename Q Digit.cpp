#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,rem;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        int a;
        cin>>a;

        if(a==0)
        {
            cout<<a;
        }
        else
        {

          while(a!=0)
            {

                rem=a%10;
                cout<<rem<<" ";
               a/=10;
           }
          }
        cout<<'\n';

     }

     }
