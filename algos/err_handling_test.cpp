#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	cout << endl;
	try{
		int i = stoi(s);
		cout << i << endl;
	}
	catch(invalid_argument &ag){
		cout << "enter valid number" << endl;
	}catch(out_of_range &aa){
		cout << "Integer Overflow" << endl;
	}
}
