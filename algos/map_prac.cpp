#include<iostream>
#include<map>
#include<string>

using namespace std;


void map_demo_one(){
	map<int, string> dt;
	dt[1] = "anjal";
	dt[2] = "dhakal";
	map<int, string>::iterator itr;
	for(itr = dt.begin();itr != dt.end();itr++){
		cout << itr->first << " = " << itr-> second << endl;
	}
}


int main(){
	map_demo_one();
}
