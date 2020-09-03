#include <iostream>

using namespace std;

bool is_palindrome(int n){
  int result = 0;
  int temp = n;
  while(temp!=0){
    result=result*10+temp%10;
    temp/=10;
  }
  cout << result << "\n";
  if(result==n){
    return true;
  }
  return false;
}

int main(){
  int n;
  cin >> n;
  cout << is_palindrome(n) << "\n";
}
