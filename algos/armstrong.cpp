#include<iostream>

using namespace std;

bool armstrong(int n){
  int res = 0, arm = 0;
  int temp = n;
  while(n>0){
    res = n%10;
    n/=10;
    arm+=res*res*res;
  }
  if(temp==arm){
    return true;
  }
  return false;
}


int main(){
  cout << "Enter Number: ";
  int n;
  cin >> n;
  cout << armstrong(n) << "\n";
}
