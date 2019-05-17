#include<bits/stdc++.h>
using namespace std;
#define lli long long int
vector<lli> dp(1000000, 0);

#define SPEED ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
lli findMax(lli n){
    if(n < 1000000){
        return dp[n];
    }
    return findMax(n/4) + findMax(n/3) + findMax(n/2);
}
void countMaxcoins(){
    dp[0] = 0;
    for(lli i = 0; i < 1000000; i++){
        dp[i] = max(i, dp[i/2] + dp[i/3] + dp[i/4]);
    }
}
int main(){
	SPEED;
	lli n;
	countMaxcoins();
	while(cin >> n){	    
	    
	    lli ans = findMax(n);
	    
	    cout << ans << endl;
	    
	}
		
	
}
	
