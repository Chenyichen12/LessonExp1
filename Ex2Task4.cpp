//
// Created by 陈鹏宇 on 2023/11/13.
//
#pragma once

#include "iostream"

class Exercise5 {
public:
    //new 出来了两个数组
    static std::pair<int *, int *> split(int array[], int n, int evenNum) {
        int *even = new int[evenNum];
        int *odd = new int[n - evenNum];
        int a = 0;
        int b = 0;
        for (int i = 0; i < n; ++i) {
            if (array[i] % 2 == 0)
                even[a++] = array[i];
            else
                odd[b++] = array[i];
        }
        return std::make_pair(even, odd);
    }

    // new 出来了一个数组
    static int *merge(const int left[], int leftNum, const int right[], int rightNum) {
        int *mergeArray = new int[leftNum + rightNum];
        int k = 0;
        for (int i = 0; i < leftNum; ++i) {
            mergeArray[k++] = left[i];
        }
        for (int i = 0; i < rightNum; ++i) {
            mergeArray[k++] = right[i];
        }
        return mergeArray;
    }

    static int *sortMerge(const int left[], int leftNum, const int right[], int rightNum) {
        int *mergeSort = new int[leftNum + rightNum];
        int k = 0;
        int i = 0;
        int j = 0;
        while (i < leftNum && j < rightNum) {
            if (left[i] < right[j])
                mergeSort[k++] = left[i++];
            else
                mergeSort[k++] = right[j++];
        }
        while(i<leftNum)
            mergeSort[k++] = left[i++];
        while(j<rightNum)
            mergeSort[k++] = left[j++];
        return mergeSort;
    }
};