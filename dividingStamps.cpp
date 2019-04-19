#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int sum1 = 0;
    for(int j = 1; j <= n; j++){
        sum1 += j;
    }
    if(sum == sum1)
        cout << "YES" <<endl;
    else
        cout << "NO" << endl;
    return 0;
    
    
}
