//
// Created by 陈鹏宇 on 2023/11/13.
//
#pragma once
#include "Ex2Task4.cpp"
#include "Ex2Task6.cpp"
class testClass{
public:
    static void test1(){
        int array[] = {1,2,3,4,5,6};
        auto a = Exercise5::split(array,6,3);
        for (int i = 0; i < 3; ++i) {
            std::cout<<a.first[i]<<" ";
        }
        std::cout<<'\n';
        for (int i = 0; i < 3; ++i) {
            std::cout<<a.second[i]<<' ';
        }
        std::cout<<'\n';
        delete[] a.first;
        delete[] a.second;
    }
    static void test2(){
        int array1[] ={6,5,4};
        int array2[] = {1,2,3};
        auto a = Exercise5::merge(array1,3,array2,3);
        for (int i = 0; i < 6; ++i) {
            std::cout<<a[i]<<' ';
        }
        std::cout<<'\n';
        delete[] a;
    }

    static void test3(){
        int array1[] ={2,5,6};
        int array2[] = {1,2,3};
        auto a = Exercise5::sortMerge(array1,3,array2,3);
        for (int i = 0; i < 6; ++i) {
            std::cout<<a[i]<<' ';
        }
        std::cout<<'\n';
        delete[] a;
    }

    static void testArray(){
        cout<<"write the array, first line is the length of the array"<<'\n';
        int n;
        std::cin>>n;
        int* array = new int[n];
        for(int i = 0;i<n;i++){
            std::cin>>array[i];
        }
        auto testClass = myArray(array,n);
        cout<<"最小值为"<<testClass.minimum()<<'\n';
        cout<<"最大值为"<<testClass.maximum()<<'\n';
        cout<<"最小值位置为"<<testClass.minipos()+1<<'\n';
        cout<<"最大值位置为"<<testClass.maxipos()+1<<'\n';
        cout<<"数组总和为"<<testClass.sumNum()<<'\n';
        cout<<"数组平均值为"<<testClass.average()<<'\n';
        cout<<"整个数组为";
        testClass.show();

        auto mergetest = testClass.split();
        cout<<"偶数分割数组为";
        mergetest.first.show();
        cout<<"奇数分割数组为";
        mergetest.second.show();
        cout<<"合并数组为";
        auto merge1 = myArray::merage(testClass,testClass);
        merge1.show();
    }


};