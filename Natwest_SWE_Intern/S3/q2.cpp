#include <cstddef>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int findCount(string &s1, string &s2){
    // s1.erase(remove(s1.begin(),s2.end(), ' '), s1.end()); no whitespaces in the string
    for(auto x : s1){
        x = tolower(x);
    }

    for(auto y : s2){
        y = tolower(y);
    }

    size_t pos =0;
    int count =0;

    while((pos = s1.find(s2,pos)) != string::npos){
        count++;
        pos++;
    }
    return count;
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int res = findCount(s1,s2);
}
