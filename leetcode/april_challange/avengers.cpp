#include <iostream>
#include <vector>

bool sold_tickets(std::vector<int> array){
    int hundred = 0;
    int fifty = 0;
    int twenty_five = 0;
    
    for(int item : array){
        if(item == 100){
            if(twenty_five>=3){
                twenty_five-=3;
                hundred++;
            }else if(twenty_five>=1 && fifty>=1){
                twenty_five-=1;
                fifty-=1;
                hundred++;
            }else{
                return false;
            }
        }
        if(item==50){
            if(twenty_five>=1){
                twenty_five-=1;
                fifty++;
            }else{
                return false;
            }
        }
        if(item==25){
            twenty_five++;
        }
    }
    return true;
}

int main(){
    std::vector<int> moneys = {25, 25, 50};
    // std::vector<int> moneys = {25, 100};
    // std::vector<int> moneys = {25, 25, 50, 50, 100};
    // std::cout << sold_tickets(moneys) << "\n";
    bool value = sold_tickets(moneys);
    std::cout << value <<"\n";
}





