#include<bits/stdc++.h>
using namespace std;
bool checkPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t, n; 
	cin >> t;
	while(t--){
	  cin >> n;
	  if(checkPrime(n)){
	      cout << n - 1 << endl;
	  }else{
    	  int sqr = sqrt(n);
    	  
    	  int asc[sqr];
    	  int desc[sqr];
    	  asc[0] = 1;
    	  desc[0] = n;
    	  int c = 1;
    	  int min =INT_MAX;
    	  
    	  
    	  for(int i = 2; i <= sqr; i++){
    	      if(n % i == 0){
    	          asc[c] = i;	          
    	          desc[c] = n/i;
    	          c++;
    	          
    	      }
    	  }
    	  
        	  for(int i = 0; i < c; i++){
        	      
        	      int diff = abs(desc[i] - asc[i]);
        	      if(diff < min){
        	          min = diff;
        	         
        	      }
        	  }
        	  cout << min << endl;
	  }
	  
	  
	  
	}
	
	return 0;
}
