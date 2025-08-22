#include <bits/stdc++.h>

int uniqueCount(string &s){
    unordered_map<char,int> mp; 

    for(auto x : s){
        mp[x]++; 
    }

    int count =0; 

    for(auto ele : mp){
        if(ele.second==1){
            count++;
        }
    }
    return count; 
}

int main(){
    string s; 
    cin >> s; 
    int res = uniqueCount(s); 
    cout << res; 
}
