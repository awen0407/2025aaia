/// week05-1.cpp
/// 主題: 陣列Array 配合 for迴圈
#include <Stdio.h>

int main()
{ ///陣列宣告4格,裡面初始化4個值 大括號
    int a[4] = {10,20,30,40};
    for(int i=0;i<4;i++){
        printf("%d ",a[i]);
    } ///電腦for迴圈,從0開始
    printf("\n"); ///跳行

    a[0] = 99; ///把a[0]的值換成99
    for(int i=0;i<4;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
