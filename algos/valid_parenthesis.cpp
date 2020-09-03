#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <string>

using namespace std;

bool is_valid(string &str){
  if(str.length()==0){
    return true;
  }
  vector<char> bag;

  map<char, char> brackets = {{'(',')'},
                              {'{','}'},
                              {'[',']'}};

  for(int i=0;i<str.size();i++){
    if(bag.size()!=0 && brackets[bag.back()]==str[i]){
      bag.pop_back();
    }
    else{
      bag.push_back(str[i]);
    }
  }
  if(bag.size()==0){
    return true;
  }else{
  return false;
  }
}

int main(){
  string str = "{[]}";
  cout << is_valid(str) << endl;
}
