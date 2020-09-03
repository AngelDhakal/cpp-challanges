#include<iostream>

bool is_even(int &num){
	if(num==0){
		return true;
	}else if(num==1){
		return false;
	}else{
		return is_even(num-2);
	}
}

int main(){
	int n = 30;
	std::cout << is_even(n) << "\n";
}
