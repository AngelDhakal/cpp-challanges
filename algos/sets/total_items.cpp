/*
Find total numbers of items in a vector(sorted)
*/

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool f(int x, int y){ // this is a comparator function that returns either true or false
  return x>y;
}

void vector_demo(){
  vector<int> A = {1,3,2,4,5,4,4,4,4};

  sort(A.begin(), A.end());

  vector<int>::iterator itr1 = lower_bound(A.begin(),A.end(),4); // stores a value which is greater or equal to 4.
  vector<int>::iterator itr2 = upper_bound(A.begin(),A.end(),4); //stores a value which is strictly greater than 4(5)

  int total_fours = itr2-itr1;

  cout << total_fours << endl;
  cout << *itr1 << *itr2 << endl; //the pointer of iterator variable should be used to print or use the value in iterator.

  sort(A.begin(),A.end(),f);

  vector<int>::iterator itr3;

  for(itr3 = A.begin(); itr3 != A.end(); itr3++){
    cout << *itr3 << " ";
  }
  cout << endl;
}

void set_demo(){
  set<int> S;
  S.insert(1);
  S.insert(2);
  S.insert(-1);
  S.insert(-10);
  for(int i : S){
    cout << i << " ";
  }
  cout << endl;
}

int main(){
  set_demo();
}
