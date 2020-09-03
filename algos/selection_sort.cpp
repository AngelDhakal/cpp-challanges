#include <iostream>
#include <vector>

using namespace std;

vector<int> selection_sort(vector<int> &nums, string order="asc"){
	int check;
	int temp;
	for(int i=0; i<nums.size();i++){
		check = i;
		for(int j=i+1;j<nums.size();j++){
			if(order=="asc"&&nums[j]<nums[check]){
				check = j;
			}
			if(order=="desc"&&nums[j]>nums[check]){
				check = j;
			}
		}
		temp = nums[i];
		nums[i] = nums[check];
		nums[check] = temp;
	}
	return nums;
}

int main(){
	vector<int> arr = {5,7,3,2,4,6,8,1,10,9};
	vector<int> result = selection_sort(arr, "desc");
	vector<int>::iterator itr;
	for(itr=result.begin();itr!=result.end();itr++){
		cout << *itr << " ";
	}
	cout << endl;
}
