#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string simplifyStr(string str){
  string str1 = "";
  
  for(int i = 0; i < str.size(); i++){
    if(str[i] == ' '){}
    else{
      str1.push_back(tolower(str[i]));
    }
  }
  return str1;
}
bool isAnagram(string s1, string s2){
  string a = simplifyStr(s1);
  string b = simplifyStr(s2);
  int asize = a.size();
  bool res = true;
  for(int i = 0; i < asize; i++){
    if(b.size() == 0) {
        res = false;
        break;
    }
    for(int j = 0; j < b.size(); j++){
        if(a[i] == b[j]){
          b.erase(j, 1);
          break;
        }
    }
    
  }
  if(b.size() != 0) res = false;
  return res;
}
int main(){
    int x = 1;
    int y = 2;
    string a = "Lord voldemorT";
    string b = simplifyStr(a);
    b.erase(1,1);
    cout << b << endl;
    string m = "abcde  ";
    string n = "bcade";
    if(isAnagram(m,n))cout << "nb" << endl;
    return 0;
}