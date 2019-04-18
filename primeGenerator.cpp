#include<bits/stdc++.h>
#define prVec(vec, n) for(int _ = 0; _ < n; ++_) cout<<vec[_]<<"\n";
using namespace std;
const int INF=(int)1e9+10;
const int MOD=(int)1e9+7;
vector<int> ans, p, primes(32005, 1);
map<int, bool>segSieve;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	for(int i = 2; i <= 32000; i++){
		if(!primes[i])
			continue;
		
		for(int j = i+i; j <= 32000; j+= i){
			primes[j] = false;
		}
		p.push_back(i);
	}
	int t;
	cin>>t;
	while(t--){
	int l, r;
	cin>>l>>r;
	for(int i = l; i <= r; i++){
		segSieve[i] = 1;
	}
	for(auto no : p)			
		for(int i = l/no*no; i <= r && no < l; i+=no){
			segSieve[i] = 0;
		}
		for(int i = max(l, 2); i <= r; ++i){
			if(!segSieve[i])
				continue;
			ans.push_back(i);
			for(int j = i + i; j <= r; j+=i)
				segSieve[j] = false;
			}
			prVec(ans, ans.size());
			cout<<"\n";
			ans.clear();
			segSieve.clear();
	}
	return 0;
}


	



