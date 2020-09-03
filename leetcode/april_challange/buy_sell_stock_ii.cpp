#include <iostream>
#include <vector>

int max_profit(std::vector<int> nums){
    int total = 0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]>nums[i-1]){
            total += nums[i]-nums[i-1];
        }
    }
    return total;
}

int main(){
    std::vector<int> nums = {1,2,3,4,5};
    std::cout << max_profit(nums) << std::endl;
}
