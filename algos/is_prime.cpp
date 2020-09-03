#include <iostream>

using namespace std;

bool is_prime(int num){
	bool result = true;
	if(num%2==0) result = false;
	int checker = num/2;
	for(int i=3; i<checker;i++){
		if(num%i==0) {
			result = false;
			break;
		}
	}
	if(result==false){
		return false;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	cout << is_prime(n) << "\n";
}
