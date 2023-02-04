#include<bits/stdc++.h>

using namespace std;
int main(){
    int n, x, y;
    cin >> n >> x >> y;
    x--;
    y--;
    int ar[n][n];
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cin >> ar[i][j];
        }
    }
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(i==x){
                swap(ar[i][j],ar[y][j]);
            }
        }
    }
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(j==x){
                swap(ar[i][j],ar[i][y]);
            }
        }
    }
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cout << ar[i][j] << " ";
        }
        cout << '\n';
    }
}
