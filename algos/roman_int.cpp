#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int romanToInt(string s){
  map<char, int> values = {
                          {'i',1},
                          {'v',5},
                          {'x',10},
                          {'l',50},
                          {'c',100},
                          {'d',500},
                          {'m',1000}
                            };

  int result = 0;
  for(int i=0;i<s.length();i++){
    if (values[s[i+1]]<=values[s[i]]) {
      result+=values[s[i]];
    }else{
      result-=values[s[i]];
    }
  }
  return result;
}

int main(){
  cout << romanToInt("iii") << endl;
}
