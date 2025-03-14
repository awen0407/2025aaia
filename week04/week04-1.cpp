// week04-1.cpp 二合一 C++ 版本 只要紅框框裡的程式
// leetcode 2529. Maximum Count of Positive Integer and Negative Integer
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0,neg = 0;
        for (int i=0; i < nums.size(); i++){
            if(nums[i] > 0) pos++; // 正數++
            if(nums[i] < 0) neg++; // 負數++
        }
        if(pos>neg) return pos; // 正數比較大 送出去
        else return neg; // 不燃負數比較大 送出去
    }
};