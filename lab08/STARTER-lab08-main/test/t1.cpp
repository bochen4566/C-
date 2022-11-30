#include <iostream>
using namespace std;

int main(){
    int a[2][3] = {{1,2,3}, {4,5,6}};
    int **arr = new int*[2];
    for(int i = 0; i < 2; i++){
        arr[i] = new int[i];
        for(int j = 0; j < 3; j++){
            arr[i][j] = a[i][j];
        }
    }
    for(int x = 0; x < 2; x++){
        for(int y = 0; y < 3; y++){
            cout << arr[x][y] << " ";
        }

    cout << endl;
    }
    return 0;
}