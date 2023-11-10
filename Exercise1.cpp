//
// Created by 陈鹏宇 on 2023/11/10.
//
#include "iostream"
#include <iomanip>
using namespace std;
class Exercise1{
public:
    static double calculate(int n){
        return ((6-abs(7-n))/36.0)*100;
    }
    static void outPut() {
        int ansBox[13];
        //初始化
        for (auto &item: ansBox)
            item = 0;
        for (int i = 0; i < 36000; ++i) {
            int first = rand() % 6 + 1; // NOLINT(*-msc50-cpp)
            int second = rand() % 6 + 1;// NOLINT(*-msc50-cpp)
            ansBox[first+second]++;
        }

        //format
        cout<<"Sum\t"<<"Total\t"<<"Expected\t"<<"Actual\t"<<"\n";
        for(int i = 2;i<=12;i++){
            cout<<i<<'\t'<<ansBox[i]<<setw(4)<<'\t'<<fixed<<setprecision(3)<<
                calculate(i)<<"%"<<setw(5)<<'\t'
                <<ansBox[i]/36000.0*100<<"%\t"
                <<'\n';
        }
    }
};
