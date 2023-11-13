//
// Created by 陈鹏宇 on 2023/11/10.
//
#pragma once
#include "iostream"
#include "Ex2Task2.cpp"
#include "Ex2Task3.cpp"
using namespace std;
class Exercise2{
public:
    static void outPut(){
        cout<<"write the array, first line is the length of the array"<<endl;
        int n;
        int* array = inPut(n);
        cout<<n<<endl;
        for (int i = 0; i < n; ++i) {
            cout<<array[i]<<' ';
        }
        cout<<'\n';
        Exercise3::outPut(array,n);
        Exercise4::outPut(array,n);
        delete[] array;
    }
    static int* inPut(int& n){
        cin>>n;
        int* array = new int[n];
        for (int i = 0; i < n; ++i) {
            cin>>array[i];
        }
        return array;
    }
};