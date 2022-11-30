#include <iostream>
#include <fstream>
#include <cfloat>
#include <cmath>
#include <vector>

using namespace std;

//void arrSwitch( int *arr ) {
//    int tmp = arr[0];
//    arr[0] = arr[1];
//    arr[1] = tmp;
//}

//void vecSwitch( vector<int> vec ) {
//    int tmp = vec.at(0);
//    vec.at(0) = vec.at(1);
//    vec.at(1) = tmp;
//}


struct tmpStr {
    int sz;
    int *arr;

    tmpStr operator = ( tmpStr &src ) {
        sz = src.sz;
        arr = new int[sz];
        for (int i=0; i < sz; i++) arr[i] = src.arr[i];

        return *this;
    }
};

int main(  ) {

    tmpStr str1, str2;

    str1.sz = 3;
    str1.arr = new int[str1.sz];

    for (int i=0; i < 3; i++) str1.arr[i] = i;

    str2 = str1;

    for (int i=0; i < 3; i++) cout << str2.arr[i] << " ";
    cout << endl;

    for (int i=0; i < 3; i++) str1.arr[i] = i+1;

    for (int i=0; i < 3; i++) cout << str2.arr[i] << " ";
    cout << endl;

//    vector<int> vec(3);
//    vec.at(0) = 0;
//    vec.at(1) = 1;
//    vec.at(2) = 2;
//
//    for (int i=0; i < 3; i++) cout << vec.at(i) << " ";
//    cout << endl;
//
//    vecSwitch( vec );
//
//    for (int i=0; i < 3; i++) cout << vec.at(i) << " ";
//    cout << endl;


//    int arr[3] = {1, 2, 3};
//
//    cout << *(arr) << *(arr+1) << *(arr+2) << endl;
//
//    arrSwitch( arr );
//
//    cout << *(arr) << *(arr+1) << *(arr+2) << endl;

    return 0;
}

