#include <iostream>

using namespace std;

int main(){
  int n=10,z=0,a=0,b=1;
  while(z<=n){
    int c = a+b;
    a = b;
    b = c;
    z++;
    cout << a << "\n";
  }
}
