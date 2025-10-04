#include <bits/stdc++.h>

using namespace std;

void SubsequencesSum(vector<int>& nums, vector<vector<int>>&  res, int s, int ind, vector<int> op, int sum) {
    if(ind >= nums.size()) {
        if(s==sum) res.push_back(op);
        return;
    }
    op.push_back(nums[ind]);
    s += nums[ind];
    SubsequencesSum(nums,res,s,ind+1,op,sum);
    op.pop_back();
    s -= nums[ind];
    SubsequencesSum(nums,res,s,ind+1,op,sum);
}  
int main() {
    vector<int> nums = {1,2,1};
    vector<vector<int>> res;
    vector<int> op;
    int sum = 2;

    SubsequencesSum(nums,res,0,0,op,sum);

    for(auto v:res) {
        cout << "(";
        for(int i:v) cout << i << " ";
        cout << ")";
        cout << endl;
    }

    return 0;
}