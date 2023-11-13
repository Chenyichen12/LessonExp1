//
// Created by 陈鹏宇 on 2023/11/13.
//
#pragma once
#include "iostream"
using std::cout;
class Exercise4 {
public:
    static int sumNum(const int *array, int n) {
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            ans += array[i];
        }
        return ans;
    }

    static double average(const int *array, int n) {
        return sumNum(array, n) * 1.0 / n;
    }

    static int even(const int *array, int n) {
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (array[i] % 2 == 0)
                ans++;
        }
        return ans;
    }
    static int odd(const int *array, int n){
        return n-even(array,n);
    }

    static void outPut(const int *array, int n){
        cout<<"总和为"<<sumNum(array,n)<<'\n';
        cout<<"平均为"<<average(array,n)<<'\n';
        cout<<"偶数个数为"<<even(array,n)<<'\n';
        cout<<"奇数个数为"<<odd(array,n)<<'\n';
    }

};