#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
        
    }
    // int cnt;
    // bool ok = true;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i]){
                cout << "NO";
                return 0;
                // ok = false;
                // break;
            }
        }
        
    }
    cout << "YES";
    // cout << cnt;
    // if(cnt == n * n){
    //     cout << "YES";
    // }
    // else{
    //     cout << "NO";
    // }
    // if(ok){
    //     cout << "Yes";
    // }
    // else
    //     cout << "NO";

    return 0;
}