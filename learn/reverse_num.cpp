#include <iostream>


int main(){
	int number;
	std::cout << "Input:  ";
	std::cin>>number;
	int rev = 0;
	while(number!=0){
		rev = rev*10+number%10;
		number = number/10;
	}
	std::cout << "Output: " <<rev << std::endl;
}