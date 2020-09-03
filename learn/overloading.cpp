#include <iostream>

using namespace std;

int fun(int i){
    return i;
}

float fun(float i){
    return i;
}

double fun(double i){
    return i;
}

int main(){
    cout << "integer i: " << fun(12) << endl;
    cout << "float i: " << fun(1.2F) << endl;
}

