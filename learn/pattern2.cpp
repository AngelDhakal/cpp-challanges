/*
12345
1234
123
12
1
*/


#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
	for(int i=5;i>0;i--){
		for(int j=1;j<=i;j++){
			cout << j;
		}
		cout << endl;
	}
}