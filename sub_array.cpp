#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,mx;
    cin>>y;
    int arr[1234],i;
    while(y--)
    {
        int x;
        cin>>x;

        for(int i=0; i<x; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<x; i++)
        {
            mx=INT_MIN;
            for(int j=i; j<x; j++)
            {
                mx=max(mx,arr[j]);
                cout<<mx<<' ';
            }
        }
        cout<<'\n';
    }


}