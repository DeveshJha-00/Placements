#include <limits>
#include <map>
#include <vector>
#include <iostream>

using namespace std;

vector<int> findMaxProfit(vector<vector<int>> &nums){
    vector<int> maxP;

    for(int i =0; i<nums.size();i++){
        int maxe =numeric_limits<int>::min();
        for(int j =0; j< nums[0].size();j++){
            maxe = max(maxe,nums[i][j]);
        }
        maxP.push_back(maxe);
    }
    return maxP;
}

int main(){
    int m, n;
    cin >>m;
    cin >> n;
    vector<vector<int>> nums(m,vector<int>(n));
    for(int i=0; i<m; i++){
        for(int j =0; j<n;j++){
            cin >> nums[i][j];
        }
    }
    vector<int> res = findMaxProfit(nums);
    for(int num : res){
        cout << num << " ";
    }
}
