#include <iostream>
#include <vector>

int max(std::vector<int> array){
    int num = array[0];
    for(int i : array){
        if(i>num){
            num = i;
        }
    }
    return num;
}
int min(std::vector<int> array){
    int num = array[0];
    for(int i : array){
        if(i<num){
            num = i;
        }
    }
    return num;
}

int main(){
    std::vector<int> nums = {5,3,17,8,9,12,1};
    std::cout << "Max is: " << max(nums) << " \n";
    std::cout << "Min is: " << min(nums) << " \n";
}


