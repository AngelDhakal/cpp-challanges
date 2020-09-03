#include<iostream>
#include<vector>

using namespace std;

vector<int> bubble_sort(vector<int> &nums){
	int temp;
	for(int i=0;i<nums.size()-1;i++){
		for(int j=0;j<nums.size()-i-1;j++){
			if(nums[j]>nums[j+1]){
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
	return nums;
}

int main(){
	vector<int> nums = {2,7,4,1,5,3};
	vector<int> arr = bubble_sort(nums);
	for(int i=0;i<arr.size();i++){
		cout << arr[i]  << endl;
	}
	cout << endl;
}
