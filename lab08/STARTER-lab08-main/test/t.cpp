#include <iostream>
#include <cstring>
using namespace std;
void switchtwo(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x;
    int y;
    string userinput = "Y";
    while(userinput != "N"){
    cout << " Enter the fisrt value:" << endl;
    cin >> x;
    cout << " Enter the second value:" << endl;
    cin >> y;
    cout << "The values you entered was " << x << " " << y << endl;
    switchtwo(x, y);
    cout << "After swtiching" << endl;
    cout << "x = " << x << " y = " << y << endl;
    cout << "Enter N to quit or Y to continue" << endl;
    cin >> userinput;
    }
    return 0;
}