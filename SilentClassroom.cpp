#include<bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define elif else if
map<char, int> c1;
map<char, int> c2;
int ans = 0;
int main(){
    SPEED;
    int n;
    cin >> n;
    vector<char> names(n);
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        names[i] = str[0];        
    }
    for(auto iter = names.begin(); iter != names.end(); iter++){
        //If same letter name not
        //present in both classroom
        if(c1.find(*iter) == c1.end()){
            c1.insert({*iter, 1});
        }
        elif(c2.find(*iter) == c2.end()){
            c2.insert({*iter, 1});
        }
        // If same letter name present in 
        //both the classroom, check for frequency
        else{
            int f1 = c1.find(*iter)->second;
            int f2 = c2.find(*iter)->second;
            if(f1 >= f2){
                c2[*iter] = f2 + 1;
            }elif(f1 < f2){
                c1[*iter] = f1 + 1;
            }
        }
    }
    for(auto iter = c1.begin(); iter != c1.end(); ++iter){
        int f1 = iter->second;
        ans += (f1*(f1 - 1))/2;
        
    }
    for(auto iter = c2.begin(); iter != c2.end(); ++iter){
        int f2 = iter->second;
        ans += (f2*(f2 - 1))/2;
        
    }
    cout << ans << endl;
    
    
    
    return 0;
}
