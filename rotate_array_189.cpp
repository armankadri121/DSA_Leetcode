#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    vector<int> arr;
    int n = nums.size();
    k %= n;
    for(int i=n-k; i<n; i++) {
        arr.emplace_back(nums[i]);
    }
    for(int i=0; i<n-k; i++) {
        arr.emplace_back(nums[i]);
    }
    cout << "[";
    for(int i=0; i<n; i++ ) {
        cout << arr[i];
        if(i != arr.size()-1) cout << ",";
    }
    cout << "]";
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(nums, k);
}

