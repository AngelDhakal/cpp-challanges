#include<iostream>
#include<string>

using namespace std;

int counting_valleys(int n; string s){
	int altitude = 0;
	int valleys = 0;
	for(int i=0;i<n;i++){
		if(s[i]=='U'){
			if(altitude==-1){
				valleys++;
			}
			altitude++;
		}
		if(s[i]=='D'){
			altitude--;
		}
	}
	return valleys;
}
