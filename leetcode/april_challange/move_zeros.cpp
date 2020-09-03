#include <iostream>
#include <vector>

void move_zeros(std::vector<int> &nums){
	for(int i=0;i<nums.size(); i++){
		if(nums[i]==0){
			nums.erase(nums.begin()+i);
			nums.push_back(nums[i]);
		}
	}
	for(int item : nums){
		std::cout << item << "  ";
	}
	std::cout << "\n";
}

int main(){
	// std::vector<int> nums = {0,0,1};
	std::vector<int> nums = {0,0,1,2,3,4,5};
	move_zeros(nums);
}
