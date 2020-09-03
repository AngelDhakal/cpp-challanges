#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValid(string s);

int main(){
  // string s = "{}()[]";
  cout << isValid("([)]") << "\n";
  // string s = "Hello";
  // cout << s.back();
}

bool isValid(string s) {
  if(0 == s.length())
      return true;
  vector<char> stack;
  stack.push_back(s[0]);
  std::map<char, char> left_to_right = {{'{', '}'},
                                        {'[', ']'},
                                        {'(', ')'}};
  for(int i = 1;i < s.length();i++)
  {
      if(stack.size()!=0 && left_to_right[stack.back()] == s[i])
          stack.pop_back();
      else
          stack.push_back(s[i]);
  }
  if(stack.empty())
      return true;
  else
      return false;
}
