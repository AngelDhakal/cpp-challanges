#include <iostream>
using namespace std;

long long factorial(long long num){
  if(num==0 || num == 1){
    return 1;
  }
  else{
    return num*factorial(num-1);
  }
}

int main(){
  cout << "Enter Number: ";
  long long n;
  cin >> n;
  cout << factorial(n) << "\n";
}
