#include <bits/stdc++.h>

using namespace std;


int largest(vector<int> &nums) {
    int num = nums[0];
    for(int i=1; i<nums.size(); i++) {
        if(nums[i] > num) {
            num = nums[i];
        }
    }

    return num;
}



//brute force solution
//tc : O(n)
//sc : o(n)
int second_largest(vector<int> &nums) {

    int largest_num = largest(nums);

    vector<int> temp;


    for(int i=0; i<nums.size()-1; i++) {
        if(nums[i]==largest_num) continue;
        temp.push_back(nums[i]);
    }

    return largest(temp);
}


//better solution

int second_largest_better(vector<int> &nums) {
    int num = nums[0];
    int largest_num = largest(nums);

    for(int i=0; i<nums.size(); i++) {
        if(nums[i] >num && nums[i] < largest_num) {
            num = nums[i];
        }
    }

    return num;
}


//optimal solution

int second_largest_optimal(vector<int> &nums) {
    int second_largest = INT_MIN;
    int largest_num = nums[0];

    for(int i=1; i<nums.size(); i++) {
        if(nums[i] > largest_num) {
            second_largest = largest_num;
            largest_num = nums[i];
        }
        else if(second_largest < nums[i] && second_largest < largest_num){
            second_largest = nums[i];
        }
    }

    return second_largest;
}

int main() {
    vector<int> nums = {4, 1, 5, 5, 5, 5, 5, 2};
    int result = second_largest_optimal(nums);
    cout << "The second largest number is: " << result << endl;
    return 0;
}