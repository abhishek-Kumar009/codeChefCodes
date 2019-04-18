#include<bits/stdc++.h>
using namespace std;
map<int, int>map1;

bool pairGenerator(map<int, int>map1, int n){
    
	int inversion = 0, loc_inversion = 0;
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			//inversions
			if(map1[i] > map1[j])
				inversion += 1;
			
			if(i < n && j == (i + 1) && map1[i] > map1[j])
				loc_inversion += 1;
			
		}

	}
	if(inversion == loc_inversion)
		return true;
	else
		return false;
  	
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
	    int num;
	    cin >> num;
		map1.insert({i, num});
		
	}
	

	bool ans = pairGenerator(map1, n);
	
	if(ans)
		cout << "YES" <<endl;
	else
		cout << "NO" <<endl;
	map1.clear();
	}
	return 0;
}
