#include <iostream>
#include <cmath>
using namespace std;
void normalizeArr(double arr[], int length){
    double sum = 0.000;
    double norm = 0.000;
    for(int i = 0; i < length; i++){
        sum += arr[i];
    }
    norm = sqrt(sum);
    for(int j = 0; j <length; j++){
        arr[j] /= norm;
    }
}

struct Date {
          	int year;
          	int month;
          	int day;
   	};

Date& operater+(const Date &a){
Date b;
b.year += a.year;
if(a.day + b. day >= 30){
    b.month += (a.day + b.day) / 30;
    b,day += (a.day + b.day) % 30;
}else{
    b.day += a.day;
}
if(a.month + b.month >= 12){
    b.year += (a.month + b.month) / 12;
    b.month += (a.month + b.month) % 12;
}else{
    b.month += a.month;
}
return b;
} 
int main(){
    int **arr = new int[10][15];
    delete **arr;
    return 0;
}