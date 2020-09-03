#include <iostream>

int main()
{
    int data[] = {1,2,3,4,5};
    for(int item : data)
    {
        std::cout << item << "\t";
    }
    std::cout << "\n";
}