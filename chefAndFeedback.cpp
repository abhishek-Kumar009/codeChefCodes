#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool checkSubstring(string, int);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int l = s.size();
	
    	bool check = checkSubstring(s, l);
    	if (check){
    		cout<<"Good"<<endl;
    	}
    	else{
    		cout<<"Bad"<<endl;
    	}
	}
	return 0;
}
bool checkSubstring(string s, int n){
	for(int len = 3; len <= 3; len++){
		for(int i = 0; i <= n - len; i++){
			string substr = "";
			int j = i + len - 1;
			for(int k = i; k <= j; k++){
				substr += string(1, s[k]);
			}
			
			if(substr == "010" || substr == "101"){
				return true;
			}
		}
	}
	return false;
	
}

