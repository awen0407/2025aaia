//week03-1.cpp 二合一 python3 的版本
//leetcode 2579. Count Total Number of Colored Cells
class Solution {
public:
    long long coloredCells(int n) {
        long long ans = n; // 要多寫這行,把數字升級,變64位元[很長很長的整數]
        return ans*ans + (ans-1) * (ans-1); //c/c++/java/c#都要加分號
    }
};