#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int sock_merchant(int n, vector<int> ar){
	sort(ar.begin(),ar.end());
	int first = ar[0];
	int count = 0;
	for(int i=0;i<ar.size();i++){
		if(first!=ar[i]){
			if(count%2==1){
				count--;
			}
			first = ar[i];
		}
		if(first==ar[i]){
			count++;
		}
	}
	return count/2;
}

int main(){
	int n;
	int num;
	vector<int> ar;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> num;
		ar.push_back(num);
	}
	cout << "Result: " <<sock_merchant(n,ar) << endl;
}
