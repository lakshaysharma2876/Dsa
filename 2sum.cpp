#include <bits/stdc++.h>

using namespace std;

string two_sum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int left =0;
    int right = nums.size()-1;
    while(left<right) {
        if(nums[left]+nums[right] > target) right--;
        else if(nums[left]+nums[right] < target) left++;
        else return "YES";
    }
    return "NO";
}

int main() {
    vector<int> arr = {2,7,5,8,11};
    string result = two_sum(arr, 14);

    cout << result << endl;

    return 0;
}