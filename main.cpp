#pragma once

#include <iostream>
#include "Exercise1.cpp"
#include "Ex2Task1.cpp"
#include "Ex2Task2.cpp"
#include "testClass.cpp"

int main() {
    cout<<"------------Exercise1------------"<<'\n';
    Exercise1::outPut();
    cout<<"------------Exercise2------------"<<'\n';
    testClass::testArray();
    return 0;
}
