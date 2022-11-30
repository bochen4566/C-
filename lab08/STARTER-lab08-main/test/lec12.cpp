#include <iostream>
#include <fstream>
#include <cfloat>
#include <cmath>
#include <vector>

using namespace std;

void testArr() {
    int *arr = new int [10];

    delete[] arr;

}

void switchNum( /*int (*mtx)[3]*/ /*int mtx[][3][4]*/ int **mtx ) {
    int tmp = mtx[0][0];
    mtx[0][0] = mtx[1][0];
    mtx[1][0] = tmp;
}

int main( int argc, char *argv[] ) {

    int *mtx = new int[2*3];
    mtx[0*3 + 0] = 1;
    mtx[0*3 + 1] = 2;
    mtx[0*3 + 2] = 3;
    mtx[1*3 + 0] = 4;
    mtx[1*3 + 1] = 5;
    mtx[1*3 + 2] = 6;


    for (int r=0; r < 2; r++) {
        for (int c=0; c < 3; c++) {
            cout << mtx[r*3 + c] << " ";
        }
        cout << endl;
    }
    /*
    int **mtx;
//    int mtx[2][3];
//
//    for (int i=0; i < 4; i++) {
//        cout << mtx2+i << endl;
//    }

    mtx = new int* [2];

    for (int r=0; r < 2; r++) {
        mtx[r] = new int [3];
    }

    mtx[0][0] = 1;
    mtx[0][1] = 2;
    mtx[0][2] = 3;
    mtx[1][0] = 4;
    mtx[1][1] = 5;
    mtx[1][2] = 6;

    switchNum( mtx );

    for (int r=0; r < 2; r++) {
        for (int c=0; c < 3; c++) {
            cout << mtx[r][c] << " ";
        }
        cout << endl;
    }

    for (int r=0; r < 2; r++) {
        delete[] mtx[r];
    }

    delete[] mtx;
     */
    return 0;
}

