#include <bits/stdc++.h>
using namespace std;
vector<int>ans;
#include<cmath>
vector<bool>touched(2011, 0);

vector<int> findAllPrimes(int n){
    int i;
    ans.push_back(2);
    for(i = 2; i < n; i+=2){
        touched[i] = true;
    }
    for(int i = 3; i <= sqrt(n); i++){
        if(!touched[i]){
            for(int j = i*i; j <= n; j = j + (2*i)){
                touched[j] = true;
            }
        }
        
    }
    for(int i = 2; i <= n; i++){
        if(!touched[i])
            ans.push_back(i);
    }
    return ans;
        
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int max_lmt = 2010;
    vector<int> ans = findAllPrimes(2010);
    int t;
    cin>>t;
    
    while(t--){
        int x, y;
        cin >> x >> y;
        int sum = x + y;
        int nxtPrime = 0;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] > sum){
                nxtPrime = ans[i] - sum;
                break;
            }
            
                
        }
        cout << nxtPrime << endl;
        
    }
    
	
	return 0;
}
