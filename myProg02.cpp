#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){
    if(argc <= 1){
        cerr << "Usage: ./myProg02 inputFile" << endl;
        exit(1);
    }
    ifstream fin;
    fin.open( argv[1]);
    string temp;
    int count = 0;
    int cduck = 0; //count of ducks
    while(!fin.eof()){
        getline( fin, temp);
        if(temp == "duck") cduck++;
        else count++;
    }
    cout << "Report for " << argv[1] << ":" << endl;
    cout << "   Animal count:    " << count + cduck << endl;
    cout << "   Duck count:      " << cduck << endl;
    cout << "   Non duck count:  " << count  << endl;
    fin.close();
    return 0;


}