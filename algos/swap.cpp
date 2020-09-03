#include<iostream>

using namespace std;

void swap(int &a, int &b){
  a = a-b;
  b = a+b;
  a = b-a;
  cout << a << " and " << b << "\n";
}

int main(){
  int a,b;
  cin >> a >> b;
  swap(a,b);
}
