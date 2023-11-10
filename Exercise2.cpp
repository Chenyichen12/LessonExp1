//
// Created by 陈鹏宇 on 2023/11/10.
//
#include "iostream"
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