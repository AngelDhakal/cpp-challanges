#include <iostream>
#include <vector>

using namespace std;

void binary_search(vector<int> &nums, int item){
  int last_index = nums.size()-1;
  int first_index = nums[0];
  int mid_index = (first_index+last_index)/2;
  while(first_index<=last_index){
    if(nums[mid_index] == item){
      cout << "The item is at " << mid_index << " position." << endl;
      break;
    }
    else if(nums[mid_index]<item){
      first_index = mid_index + 1;
    }
    else{
      last_index = mid_index-1;
    }
    mid_index = (first_index+last_index)/2;
  }
}

int main(){
  vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12};
  binary_search(nums, 9);
}
