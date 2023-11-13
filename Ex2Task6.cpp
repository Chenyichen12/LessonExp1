//
// Created by 陈鹏宇 on 2023/11/13.
//
#include "Ex2Task2.cpp"
#include "Ex2Task3.cpp"
#include "Ex2Task4.cpp"

class myArray {
private:
    int acLength;
    int totalLength;
    int *data;
    void reSizeArray() {
        totalLength *= 2;
        int *newData = new int[totalLength];
        for (int i = 0; i < acLength; ++i) {
            newData[i] = data[i];
        }
        int *tep = data;
        data = newData;
        delete[] tep;
    }
public:
    myArray(const int outData[], int length) {
        data = new int[length];
        acLength = totalLength = length;
        for (int i = 0; i < length; ++i) {
            data[i] = outData[i];
        }
    }

    myArray(const myArray &array) {
        acLength = array.acLength;
        totalLength = array.totalLength;
        data = new int[totalLength];
        for (int i = 0; i < array.acLength; ++i) {
            data[i] = array.data[i];
        }
    }

    ~myArray() {
        delete[] data;
    }

    void addItem(int num) {
        if (acLength == totalLength) {
            reSizeArray();
        }
        data[acLength] = num;
        acLength++;
    }

    std::pair<int, int> search(int num) {
        return Exercise3::search(num, data, acLength);
    }

    int minimum() {
        return Exercise3::minimum(data, acLength);
    }

    int maximum() {
        return Exercise3::maximum(data, acLength);
    }

    int minipos() {
        return Exercise3::minipos(data, acLength);
    }

    int maxipos() {
        return Exercise3::maxipos(data, acLength);
    }

    int sumNum() {
        return Exercise4::sumNum(data, acLength);
    }

    double average() {
        return Exercise4::average(data, acLength);
    }

    int even() {
        return Exercise4::even(data, acLength);
    }

    int odd() {
        return Exercise4::odd(data, acLength);
    }

    static myArray merage(const myArray &left, const myArray &right) {
        int length = left.acLength + right.acLength;
        myArray newArray = myArray(Exercise5::merge(left.data, left.acLength, right.data, right.acLength), length);
        return newArray;
    }

    std::pair<myArray, myArray> split() {
        int evenNum = even();
        auto result = Exercise5::split(data, acLength, evenNum);
        return std::make_pair(myArray(result.first, evenNum), myArray(result.second, acLength - evenNum));
    }

    static myArray sortMerge(const myArray &left, const myArray &right) {
        return myArray(Exercise5::sortMerge(left.data, left.acLength, right.data, right.acLength),
                       left.acLength + right.acLength);
    }

    void show(){
        for (int i = 0; i < acLength; ++i) {
            cout<<data[i]<<' ';
        }
        cout<<'\n';
    }
};