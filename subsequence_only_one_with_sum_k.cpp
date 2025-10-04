#include <bits/stdc++.h>

using namespace std;

bool SubsequencesSum(vector<int>& nums, vector<vector<int>>&  res, int s, int ind, vector<int> op, int sum) {
    if(ind >= nums.size()) {
        //condition satisfied
        if(s==sum) {
            res.push_back(op);
            return true;
        }
        //condition is not satisfied
        return false;
    }
    op.push_back(nums[ind]);
    s += nums[ind];
    if(SubsequencesSum(nums,res,s,ind+1,op,sum) == true) return true;
    op.pop_back();
    s -= nums[ind];
    if(SubsequencesSum(nums,res,s,ind+1,op,sum) == true) return true;
    return false;
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