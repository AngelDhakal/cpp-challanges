#include<iostream>
#include<vector>

using namespace std;

void pointer_test(){

    int *p,var = 123;

    p = &var;

    cout << "Address of var: " << p << endl;
    cout << "Address of var: " << &var << endl;
    cout << "value of var: " << *p << endl;
    cout << "Address of p: " << &p << endl;



}

void arr_pointer(){

    int *p;

    int arr[] = {1,2,3,4,5};

    p = arr;

    int size = sizeof(arr) / sizeof(int);

    int i=0;

    for(;i<size;++i){

        cout << *p << endl;

        p++;

    }


}

void vector_pointer(){


    vector<int> arr = {1,2,3,4,5};
    vector<int> arr2 = {2,4,6,8,10};

    vector<int>::iterator itr;
    itr = arr.begin();
    for(;itr!=arr.end();itr++){
        cout << *itr << endl;
    }

    cout << "------" << endl;

    itr = arr2.begin();
    for(;itr!=arr2.end();itr++){
        cout << *itr << endl;
    }

}

// type casting a pointer
void casting(){

    int one = 65;
    char *ch = reinterpret_cast<char *> (&one);
    cout << one << endl;
    cout << *ch << endl;

}

//normal test
void test(){

    char *ch, nam = 'a';
    ch = &nam;

    cout << *ch << endl;

}   

int main(){

    // pointer_test();

    // arr_pointer();

    // vector_pointer();

    // casting();

    test();

}
