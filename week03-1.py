#week03-1.py 二合一 python3 的版本
#leetcode 2579. Count Total Number of Colored Cells
class Solution:
    def coloredCells(self, n: int) -> int:
       return n*n + (n-1)*(n-1) 
       #觀察題目的圖片(不看英文,不看中文),頭轉45度,看到正方形