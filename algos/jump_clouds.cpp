#include<iostream>
#include<vector>

using namespace std;

int jump_clouds(vector<int> c){
	int count=0,i;
    for(i=0;i<c.size()-2;i++){
        if (c[i+2]==0){
            i++;
            count++;
            continue;
        }
        count++;
    }
    if(i<c.size()-1)
        count++;
    return count;
}

int main(){
	vector<int> nums;
	int num;
	cin >> num;
	int n;
	for(int i=0;i<num;i++){
		cin >> n;
		nums.push_back(n);
	}
	cout << jump_clouds(nums) << endl;
}
