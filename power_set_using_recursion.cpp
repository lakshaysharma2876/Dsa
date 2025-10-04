#include <bits/stdc++.h>

using namespace std;

void subsets(vector<int>& nums, vector<vector<int>>& res, int ind, vector<int> op) {
    if(ind >= nums.size()) {
        res.push_back(op);
        return;
    }
    op.push_back(nums[ind]);
    subsets(nums,res,ind+1,op);
    op.pop_back();
    subsets(nums,res,ind+1,op);
}

int main() {
    vector<int> nums = {56,90,100,46,37};
    vector<vector<int>> res;
    vector<int> op;

    subsets(nums,res,0,op);

    int count = 0;

    for(auto v:res) {
        cout << "(";
        for(int i:v) cout << i << " ";
        cout << ")";
        count++;
        cout << endl;
    }

    cout << "Number of subsets = " << count << endl;
    return 0;
}