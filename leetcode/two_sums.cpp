#include <iostream>
#include <vector>

vector<int> two_sums(vector<int>& nums, int target){
    std::vector<int> result;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }

}

int main(){
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    two_sums(nums,target) << "\n";
}