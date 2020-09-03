class Solution{
public:
    int singleNumber(vector<int>& nums){
        int temp = 0;
        for(int item : nums){
            temp = temp^item;
        }
        return temp;
    }
}