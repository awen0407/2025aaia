// week12-6.cpp
// Leetcode 1920. Build Array from Permutation
// ��for�j��,��}�Cans[i] = num[num[i]]
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N =nums.size(); //�}�C���j�p
        vector<int> ans(N); //ans���j�p,�p�߬O��A�� C++�}�C
        for(int i=0;i<N;i++){
            ans[i] = nums[nums[i]]; //�D�حn�A���o��
        }
        return ans;
    }
};
