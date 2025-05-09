// week12-6.cpp
// Leetcode 1920. Build Array from Permutation
// 用for迴圈,把陣列ans[i] = num[num[i]]
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N =nums.size(); //陣列的大小
        vector<int> ans(N); //ans的大小,小心是圓括號 C++陣列
        for(int i=0;i<N;i++){
            ans[i] = nums[nums[i]]; //題目要你做這個
        }
        return ans;
    }
};
