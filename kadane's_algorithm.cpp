#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> maxSubArray(vector<int>& nums) {
    int maxi = INT_MIN;
    int sum = 0;
    int start = 0, tempStart = 0, tempEnd = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (sum > maxi) {
            maxi = sum;
            tempStart = start;
            tempEnd = i;
        }

        if (sum < 0) { // reset the sum if it becomes negative
            sum = 0;
            start = i + 1;
        }
    }

    vector<int> temp;
    for (int i = tempStart; i <= tempEnd; i++) {
        temp.push_back(nums[i]);
    }

    return temp;
}

};


int main() {
    vector<int> a = {-2,-3,4,-1,-2,1,5,-3};
    Solution s;
    vector<int> res = s.maxSubArray(a);
    for(int it : res) cout << it << " ";
    return 0; 
}