#include<iostream>
using namespace std;

int sum_digits(int n){
  int res=0,sum=0;
  while(n>0){
    res = n%10;
    n/=10;
    sum+=res;
  }
  return sum;
}

int main(){
  cout << "Enter Number: ";
  int n;
  cin >> n;
  cout << sum_digits(n) << "\n";
}
