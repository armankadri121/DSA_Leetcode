// Solved by Aarman Kadri
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        for(int i=0; i<nums2.size(); i++) {
            nums1.emplace_back(nums2[i]);
        }
    
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        if(n % 2 == 0) {
            ans = (nums1[n/2-1] + nums1[n/2]) / 2.0;
        }
        else {
            ans = nums1[n/2-1];
        }
        // cout << ans;
        return ans;
    }

};

int main() {
    vector<int> num1 = {1,2,3,4,7};
    vector<int> num2 = {5,6,8,9,10};
    Solution obj;
    double ans = obj.findMedianSortedArrays(num1, num2);
    cout << ans;
    return 0;
}