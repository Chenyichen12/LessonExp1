//
// Created by 陈鹏宇 on 2023/11/10.
//
#pragma once
#include "iostream"
using std::cout;
class Exercise3 {
public:
    /*
     * 准备打乱的数组，但是没用上hh
     */
    static void prepare(int array[],int n) {
        //洗牌
        for (int i = 0; i < n; i++)
            array[i] = i;
        for (int i = n-1; i >= 0; i--) {
            std::swap(array[i], array[rand() % (i + 1)]);
        }
    }

    static std::pair<int, int> search(int num, const int *array, int n) {
        for (int i = 0; i < n; i++) {
            if (num == array[i])
                return std::make_pair(i, num);
        }
        return std::make_pair(-1, -1);
    }

    //maxOrMin = 1 表示找最大值 反之找最小值
    static std::pair<int, int> findValue(const int *array, int n, bool maxOrMin) {
        if (maxOrMin) {
            int max = INT_MIN;
            int pos = 0;
            for (int i = 0; i < n; ++i) {
                if (max < array[i]) {
                    pos = i;
                    max = array[i];
                }
            }
            return std::make_pair(pos, max);
        } else {

            int min = INT_MAX;
            int pos = 0;
            for (int i = 0; i < n; ++i) {
                if (min > array[i]) {
                    pos = i;
                    min = array[i];
                }

            }
            return std::make_pair(pos, min);
        }
    }

    static int minimum(const int *array, int n) {
        return findValue(array, n, false).second;
    }

    static int maximum(const int *array, int n) {
        return findValue(array, n, true).second;
    }
    static int minipos(const int *array, int n){
        return findValue(array,n, false).first+1;
    }
    static int maxipos (const int *array, int n){
        return findValue(array,n, true).first+1;
    }

    static void testTheFunction(){
        cout<<"write the array, first line is the length of the array"<<'\n';
        int n;
        std::cin>>n;
        int* array = new int[n];
        for(int i = 0;i<n;i++){
            std::cin>>array[i];
        }
        cout<<"最小值为"<<minimum(array,n)<<'\n';
        cout<<"最大值为"<<maximum(array,n)<<'\n';
        cout<<"最小值位置为"<<minipos(array,n)<<'\n';
        cout<<"最大值位置为"<<maxipos(array,n)<<'\n';
    }

    static void outPut(int* array,int n){
        cout<<"最小值为"<<minimum(array,n)<<'\n';
        cout<<"最大值为"<<maximum(array,n)<<'\n';
        cout<<"最小值位置为"<<minipos(array,n)<<'\n';
        cout<<"最大值位置为"<<maxipos(array,n)<<'\n';
    }
};