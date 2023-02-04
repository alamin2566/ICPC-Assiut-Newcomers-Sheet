#include <iostream>
    using namespace std;

    void solve()
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }


        int b[n];
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        int c[2*n];
        for(int i = 0; i < 2*n; i++){
            if(i<n){
                c[i] = b[i];
            }
            else {
                c[i] = a[i-n];
            }
        }
        for(int i = 0; i < 2*n; i++){
            cout << c[i] << " ";
        }
        cout << '\n';
    }

    int main()
    {
        solve();

        return 0;
    }
