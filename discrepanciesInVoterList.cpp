#include<bits/stdc++.h>
using namespace std;
map<int, bool>myMap1;
map<int, bool>myMap2;
map<int, bool>myMap3;
vector<int>vec;
int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	for(int i = 0; i < (n1 + n2 + n3); i++){
		if(i < n1){
			int e1;
			cin >> e1;
			myMap1.insert({e1, true});
		}
		if(i >= n1 && i < (n2 + n1)){
			int e2;
			cin >> e2;
			myMap2.insert({e2, true});
		}
		if(i >= (n1 + n2) && i < (n1 + n2 + n3)){
			int e3;
			cin >> e3;
			myMap3.insert({e3, true});
		}
	}
	for(auto iter = myMap1.begin(); iter != myMap1.end(); iter++){
	    bool status = false;
		int ele = iter->first;
		if(myMap2.find(ele) != myMap2.end()){
			vec.insert(std::upper_bound(vec.begin(), vec.end(), ele), ele);
			myMap2.erase(ele);
			status = true;
		}
		if(myMap3.find(ele) != myMap3.end()){
		    if(!status)
			    vec.insert(std::upper_bound(vec.begin(), vec.end(), ele), ele);
			myMap3.erase(ele);
			
		}
	}
	for(auto iter = myMap2.begin(); iter != myMap2.end(); iter++){
	    bool status = false;
		int ele = iter->first;
		if(myMap3.find(ele) != myMap3.end()){
			vec.insert(std::upper_bound(vec.begin(), vec.end(), ele), ele);
			myMap3.erase(ele);
			status = true;
		}
		if(myMap1.find(ele) != myMap1.end()){
		    if(!status)
			    vec.insert(std::upper_bound(vec.begin(), vec.end(), ele), ele);
			myMap1.erase(ele);
		}
	}
	for(auto iter = myMap3.begin(); iter != myMap3.end(); iter++){
	    bool status = false;
		int ele = iter->first;
		if(myMap1.find(ele) != myMap1.end()){
			
			vec.insert(std::upper_bound(vec.begin(), vec.end(), ele), ele);
			myMap1.erase(ele);
			status = true;
		}
		else if(myMap2.find(ele) != myMap2.end()){
		    if(!status)
			    vec.insert(std::upper_bound(vec.begin(), vec.end(), ele), ele);
			myMap2.erase(ele);
		}
	}
	cout << vec.size() << endl;
	for(int i = 0; i < vec.size(); i++){
		cout << vec[i] << endl;
	}

}
