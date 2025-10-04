#include <bits/stdc++.h>

using namespace std;

void SubsetSum(vector<int>& nums, vector<vector<int>>& res, int ind, vector<int>& op, vector<int>& sum) {
    if(ind >= nums.size()) {
        res.push_back(op);
        int s =0;
        for(int i=0; i<op.size(); i++) s+= op[i];
        sum.push_back(s);
        return;
    }
    op.push_back(nums[ind]);
    SubsetSum(nums,res,ind+1,op,sum);
    op.pop_back();
    SubsetSum(nums,res,ind+1,op,sum);

}

int main() {
    vector<int> nums = {1,2,1};
    vector<vector<int>> res;
    vector<int> op;
    int sum = 2;
    vector<int> sumSubset;

    SubsetSum(nums,res,0,op,sumSubset);

    for(auto v:res) {
        cout << "(";
        for(int i:v) cout << i << " ";
        cout << ")";
        cout << endl;
    }

    for(int i:sumSubset) cout << i << " ";
    cout << endl;

    return 0;
}