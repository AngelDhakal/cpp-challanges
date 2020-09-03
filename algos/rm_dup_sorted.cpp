#include<iostream>
#include<vector>

using namespace std;

int removeDuplicate(vector<int> &nums){
  int non_duplicate=0;
  for(int i=0;i<nums.size();i++){
    if(nums[i+1]!=nums[i]){
      non_duplicate++;
    }
  }
  return non_duplicate;
}


int main(){
  vector<int> num = {0,0,1,1,2,2};
  cout << removeDuplicate(num) << "\n";
}
