class Solution {
    int first(int num){
        int sum = 0;
        while(num){
            int value = num%10;
            n = n/10;
            sum = sum+value*value;
        }
        return sum;
    }


public:
    bool isHappy(int num) {
        unordered_set<int num> seen;
        while(true){
            if(num==1){
                return true;
            }
            num = first(num);
            if(seen.count(num)==1){
                return false;
            }
            seen.insert(num);
        }
    }
};