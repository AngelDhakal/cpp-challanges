#include<iostream>
#include<string>

using namespace std;

int repeated_string(string s, int n){
	int a = 0;
	string r = "";
	for(int i=0;i<s.size();i++){
		if(s[i]=='a'){
			a++;
		}
	}
	int main_a = 0;
	int k = n/s.size();
	int rem = n%s.size();
	for(int i=0;i<k;i++){
		r+=s;
		main_a+=a;
	}
	string p = "";
	if(rem!=0){
		for(int i=0;i<s.size()-s.size()-rem;i++){
			p.push_back(s[i]);
		}
		for(int i=0;i<p.size();i++){
			if(p[i]=='a'){
				main_a++;
			}
		}
	}
	return main_a;
}
int main(){
	string s="abc";
	int n=10;
	cout << repeated_string(s,n)<< endl;
}
