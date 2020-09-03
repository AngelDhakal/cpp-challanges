#include<iostream>
#include<vector>

using namespace std;

/*
void rotate(vector<int> &nums, int k){
	vector<int> test;
	vector<int> est;
	for(int i=0;i<nums.size()-k;i++){
		test.push_back(nums[i]);
	}
	for(int i=nums.size()-k;i<nums.size();i++){
		est.push_back(nums[i]);
	}
	nums.clear();
	for(int i=0;i<est.size();i++){
		nums.push_back(est[i]);
	}
	for(int i=0;i<test.size();i++){
		nums.push_back(test[i]);
	}
}*/

void rotate(vector<int>& nums, int k) {
	k %= nums.size();
	int baseIndex = 0;
	while (k)
	{
		for (int j = 0; j < k; j++)
			swap(nums[baseIndex + j], nums[nums.size() - k + j]);
		baseIndex += k;            
		k %= nums.size() - baseIndex;
	}
}

int main(){
	vector<int> nums = {5,6,7,8,9,10,11,12,13,14};
	int k = 3;
	rotate(nums,k);
}
